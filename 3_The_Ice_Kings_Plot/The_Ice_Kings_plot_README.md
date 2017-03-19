# The Ice King's Plot | 1Difficulty: Easy  |  Source: Microsoft College Code Competition

### The Ice King is aiming to make the largest possible perfectly rectangular sheet of ice possible, but he needs your help!

In his massive lair, the Ice King has many different icicle stalagmites that he can use to form his giant ice sheet. He has, however, planned this rather poorly and has made too many stalagmites. Each stalagmite is one meter apart from its neighbor (all are in a straight line), but each has a different height. The Ice King will provide you with a list of all of the heights of his stalagmites so that you can figure out which two are the best to use. All of the stalagmites in between the two that are chosen will be frozen with the rest of the ice sheet and can be ignored (if they are taller than your rectangle, the Ice King will trim them off later). In order to find the best two, you need to calculate the area of the ice sheet that they could form. The area is calculated by using the distance between the two stalagmites and the height of the lowest bounding stalagmite (the height to which you could pour water to freeze).

Consider a quick example in which you have stalagmites arranged in a row with heights "1 2 4 2 6 2 5 2". The optimal sheet of ice would be formed between the stalagmite at index 2 and the stalagmite at index 6 (of heights 4 and 5, respectively); it would have an area of 4(width) x 4(height) since there are 4 meters in between our two bounding stalagmites and 4 is the max height we can pour water to. Any excess of water would just leak over the edge of the stalagmite at index 2. Note that the tallest stalagmite at index 4 can’t be used to form a larger rectangle and thus can be ignored; the Ice King will just pour water on both sides.

The Ice King would like you to provide him with the size of his epic ice sheet in square meters and the indices of the left and right bounding stalagmites, starting at 0. The Ice King may live in a cave, but he isn’t some cave-man who starts counting at 1.

Don’t worry about the thickness of the ice sheet, The Ice King is only concerned with two dimensions.

It is also noted that while stalagmite rows with multiple optimal solutions could exist, the Ice King does not have any of these in his cave, i.e. each input given will have only one solution.

Input definition

The input file will contain 25 lines, each corresponding to one stalagmite configuration that needs to be solved. Each line will have a list of space-separated numbers, represeting a row of stalagmite heights.

Output definition

Your output should contain 25 lines, each with three integer values, separated by spaces:
The first value is the maximum area of ice you were able to construct based on the input.
The second value is the left index that should be used to obtain maximum area (starting at 0 and going up to length - 1).
The third value is the right index that should be used to obtain maximum area.

> Example input

> 1 2 4 2 3 2 5 2
14 16 24 9 6 15 26 16 10 28 15 5 28 26 10 16 13 6 12 16 9 14 23 4 11
22 13 20 19 25 5 15 8 2 38 22 30 21 7 24 3 3 17 23 3 15 13 4 11 2
5 0 20 8 7 12 4 12 10 20 12 18 4 6 5 13 15 8 8 3 3 4 3 0 2
9 9 14 20 16 2 9 10 7 5 15 18 18 24 2 17 0 11 18 6 5 7 17 7 2
0 3 5 15 16 0 22 19 22 7 6 29 13 17 19 26 21 25 14 22 23 9 8 11 6
2 8 17 2 16 8 4 8 7 18 26 2 27 2 6 16 10 19 1 18 7 17 6 12 12
3 6 8 4 2 12 1 8 10 8 16 6 8 9 4 13 15 13 6 8 10 16 0 3 0
14 1 0 14 11 24 6 3 6 13 33 5 47 31 15 2 20 1 1 24 11 4 6 2 11
8 17 16 2 24 21 16 23 7 21 28 33 21 30 16 21 16 25 9 1 22 12 22 15 3
11 18 12 5 6 11 18 20 6 23 24 20 4 8 6 3 13 11 10 15 9 2 0 10 3
22 19 13 0 17 20 25 1 20 6 4 20 27 9 35 17 9 22 3 15 0 18 11 22 13
24 14 12 9 5 27 1 8 26 19 27 20 6 6 21 22 8 18 22 28 22 14 0 24 22
21 14 4 23 13 4 16 18 4 15 11 35 11 21 9 16 4 25 17 25 0 15 8 16 23
24 9 7 16 7 16 22 11 13 19 33 36 37 3 4 12 1 14 24 17 11 17 17 20 18
12 4 0 23 3 19 0 29 7 34 37 19 2 25 8 19 27 1 12 23 5 6 16 2 15
24 11 4 14 28 11 23 22 35 33 15 6 20 32 21 2 10 13 3 16 7 9 24 18 20
0 1 2 3 6 15 7 11 14 1 6 13 0 0 3 2 1 13 10 0 5 7 4 4 3
24 11 2 13 3 12 11 2 13 18 20 2 8 10 7 16 1 5 5 9 11 12 2 2 13
4 10 9 5 4 2 1 22 11 17 6 14 0 13 37 3 12 13 1 4 13 19 14 13 9
5 1 0 4 2 5 11 2 11 1 2 22 12 10 12 2 1 25 14 5 1 16 1 18 5
10 8 20 6 2 12 2 2 10 13 4 12 2 4 12 16 0 13 4 13 3 5 9 7 1
6 13 18 24 16 8 24 11 21 18 27 15 42 21 3 9 21 27 14 10 24 11 6 1 3
2 11 9 9 13 22 6 13 18 13 30 30 25 15 17 22 29 15 11 15 24 17 14 17 6
16 8 12 17 24 15 7 24 22 13 28 35 29 0 15 17 14 24 16 15 9 7 4 2 5

> Example output

> 16 2 6
460 2 22
396 0 18
210 2 16
323 3 22
308 6 20
323 2 21
192 5 21
336 5 19
396 4 22
270 1 19
506 0 23
552 0 23
504 0 24
460 0 23
368 3 19
528 0 22
156 5 17
312 0 24
266 7 21
216 11 23
221 2 19
408 3 20
330 5 20
312 4 17