// Dinner Bowl C++ Implementation
// Friends order meal at 7 pm. GO bowling after dinner
// finish bowling by 11 pm.
// 10 min walk from restaurant to bowling arena SO 230 MINUTES IN TOTAL TO EAT AND 230-MAX eat+serve time = time to bowl
// How much time do they have to bowl? (in minutes)
// if no time to walk to alley = 0 minutes of bowling
// first line: single integer <100 (t) --> Number of weeks
// each test case number n < 100 --> amount of people in group.
// following n lines have 2 spaces S and C.
// S --> minutes it takes food to be served
// C --> minutes it takes to eat food
// output: n lines of output of time to bowl.

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){
	int people,i,j,week,c,s,temp1,temp2;
	int result[100];

	FILE *myfile2;
	myfile2 = fopen("PracticeInput1.txt", "r");    //opens file in read mode
	fscanf(myfile2, "%d\n", &week);
	for (i=0;i<week;i++){
		fscanf(myfile2, "%d\n", &people);
		temp1,temp2 = 300;
		for (j=0;j<people;j++){
			fscanf(myfile2, "%d %d\n", &c,&s);
			temp1 = 230-(c+s);
			if (temp1<temp2){
				temp2 = temp1;
			}
			if (j==(people-1)){
				if (temp2<0){
					result[i] = 0;
				}
				else{
				result[i] = temp2;
				}
			}
		}                                        //230-MAX eat+serve time = time to bowl
	}

	for (i=0;i<week;i++){
	cout << result[i] << '\n';
	}
	
return (0);
}
