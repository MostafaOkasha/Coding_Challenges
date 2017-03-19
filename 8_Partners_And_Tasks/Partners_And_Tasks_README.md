# Partners and tasks | Difficulty: Hard  |  Source: Microsoft College Code Competition

### An upcoming school assignment will require participants to partner with one another on several tasks. The school would like students to work with more than one partner during the course of the assignment and also wants to ensure no individual student is overworked.
To this end, it divides the students into two groups and imposes 3 constraints: 1. Students in group A can only partner with those in group B 2. A limit will be imposed on how many times any pair of students can complete a task together. 3. There is an overall task limit imposed on each student and the limits are the same for each member of group A and group B.

For this problem, you will be given: A, the maximum number of tasks a member of group A is allowed to do. B, the maximum number of tasks a member of group B is allowed to do. X, the maximum number of tasks a pair of students can work on together (one from group A, one from group B) numberOfA, the number of students in group A. numberOfB, the number of students in group B.

Your program will then need to calculate the maximum number of tasks that can be completed within the given set of constraints.

For example, when X=3, A=5, B=10, numberOfA=3, numberOfB=3

Following the above rules: 3 students from group A and 3 from group B can complete 15 tasks in total. Similarily, 2 students in group A and 1 from B can complete 6 tasks.

Input definition

The input will consist of non-negative comma separated integer values in the following format:

X,A,B,numberOfA,numberOfB
For simplicity, you can assume that the number of people in either group will never be more than 50.

Output definition

Output should be a non-negative integer denoting the total number of tasks completed for the given set of input.

Example input

11,10,6,11,2
6,9,12,2,6
10,8,14,4,3
11,1,5,9,11
Example output

12
18
32
9