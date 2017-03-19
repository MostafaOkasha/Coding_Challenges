# Lights | Difficulty: Medium  |  Source: Microsoft College Code Competition


### There are n lights in a row and n people. The lights are numbered as l1, l2, l3, ... , ln and the people are numbered as p1, p2, p3, ... , pn. Initially, all of the lights are turned on. Each of the people will toggle some of the lights. pi will toggle every ith light (li, l2i, l3i, ...). For example, p1 will toggle every light (l1, l2, l3, ...), p2 will toggle every 2nd light (l2, l4, l6, ...), p3 will toggle every 3rd light (l3, l6, l9, ...), and so on.

Your task, given the value of n, is to find how many lights will be turned on at the end when everyone is done toggling the lights.

HINT: Only perfect squares have an odd number of integer divisors (e.g., divisors of 16 are 1, 2, 4, 8 and 16).

Input definition

An input file for this problem will contain an arbitrary number of lines.

Each line will contain a single positive integer n, representing a number of lights and people, where 0 <= n <= 2147483647.

Output definition

Your output should contain the same number of lines as the corresponding input.

Each line of the output should contain an integer indicating the number of turned on lights for the corresponding n in the input file.

Example input

0
1
2
3
Example output

0
0
1
2