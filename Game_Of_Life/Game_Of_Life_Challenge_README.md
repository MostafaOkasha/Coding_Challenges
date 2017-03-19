# Game of Life | Difficulty: Easy  |  Source: Microsoft College Code Competition

### Many people are familiar with the Game of Life. The reference here is not to the board game which makes it seem that life is randomly decided by young children spinning colorful plastic that falls apart more often than not! It instead refers to the game where there is nothing random about life at all and people spend hours creating cool designs based upon what are supposed to be populations of something living. In this problem, we are going to revisit this classic. Familiarity with the original game is not needed for this problem since it relies on a modified version.

The new version is also "played" on a grid. In this version, each cell may contain either an asterisk (*) representing a female holly plant, a pound sign (#) representing a male holly plant, or a period (.) representing an empty cell. At each step in time, each cell considers the cells above, below, to the left, and to the right. Based on the contents of these 4 cells (fewer for cells on the edge of the grid), the cell behaves as follows:

A plant cell with less than two neighbors of the opposite gender dies and becomes empty.
A plant cell with more than three neighbors of the opposite gender dies and becomes empty.
Otherwise, the non-empty cells remains the same.
An empty cell grows a new plant only when it has exactly three plant neighbors and they are not all the same gender. In this case, the cell becomes the gender that is represented by only one of the three neighbors.
Your job is to simulate this zero player game for a given number of time steps. Your solution should ensure that each step has occurred atomically.

Input definition

The input for this problem will start with one line containing 3 space-separated integers H, W, and T, the height and width of the grid and the number of steps to simulate the game, respectively (H, W < 25, T < 200). The next H lines will contain W characters representing the grid. Each grid cell may be one of the following:

An * (asterisk) for a female holly plant
A # (pound sign) for a male holly plant
A . (period) for an empty cell
Output definition

The output for this problem should contain H lines consisting of W characters describing the grid state after T steps.

Example input

 5 5 2
 *###*
 #***#
 *###*
 #***#
 *###*
 Example output
 
 *#*#*
 #*.*#
 *###*
 #*.*#
*#*#*
