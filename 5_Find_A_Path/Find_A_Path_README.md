# Find A Path | Difficulty: Medium  |  Source: Microsoft College Code Competition

### Given a 2-dimensional array with x rows and y columns and an integer n, your task is to find whether or not a path exists from 1 to n.

Each array contains every integer from 1 to x * y inclusive. Each integer appears only once in the array.

A path starts from the element with value 1 in the array. You can only step left, right, up, or down to an adjacent element. Each step must be to the next increasing element in the sequence (1, 2, 3, ..., n) and you can only visit each element once.

For each of the given test cases in the input, your task is to return true if a path exists from elements 1 through n and false otherwise.

Input definition

An input file for this problem will contain an arbitrary number of lines.

The first line will contain an integer, m, denoting the number of tests in the input file.

Each subsequent line will either contain one integer n, one integer x, one integer y, a list of space-separated integers, or a blank line.

Each 2-dimensional array with x rows and y columns will be preceded by 3 lines: the first one contains one integer n, the second one contains one integer x (representing the number of rows in the matrix), and the third one contains one integer y (representing the number of columns in the matrix). Each test case is followed by a blank line.

Every line that represents a row in an array will contain y>1 space-separated integers.

Each array will contain all integers from 1 to x * y, inclusive. Each integer will appear only once.

Output definition

Your output should contain m lines, each containing one boolean corresponding to each input array.

The line should contain true if there exists a path from 1 to n in the corresponding input array and false otherwise.

Example input

13

2
2
3
5 3 6
2 4 1

4
2
3
5 3 6
2 4 1

4
2
3
5 3 6
2 4 1

2
2
2
3 2
4 1

4
2
3
5 3 6
2 4 1

3
2
2
3 2
4 1

3
2
2
3 2
4 1

2
2
2
3 2
4 1

2
2
2
3 2
4 1

3
2
3
5 3 6
2 4 1

3
2
2
3 2
4 1

3
2
2
3 2
4 1

2
2
3
5 3 6
2 4 1
Example output

false
false
false
true
false
true
true
true
true
false
true
true
false 