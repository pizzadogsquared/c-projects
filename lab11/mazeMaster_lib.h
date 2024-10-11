#ifndef MAZEMASTER_LIB_H
#define MAZEMASTER_LIB_H

// header file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// global constants
#define CHARACTER_POS 'C' // Current character position
#define TARGET_POS 'T' // Target position
#define OBSTACLE 'X' // Obstacle
#define VALID_POS 'B' // Valid position
#define ROWS 5 // Total Rows
#define COLS 5 // Total Columns

/*
Name: generateRandomNumber
Process: generates a random number
Function input/parameters: maxNumber: Maximum number in random number generator
Function output/parameters: None
Function output/returned: randomNum: Generated random number
Dependencies: time.h, stdlib.h - rand, time.
*/
int generateRandomNumber(int maxNumber);

/*
Name: initializeGrid
Process: Initializes the grid at the start of the game
Function input/parameters: grid: 2-D array of ROWS rows and COLS columns
Function output/parameters: None
Function output/returned: None
Dependencies: generateRandomNumber.
*/
void initializeGrid(char grid[ROWS][COLS]);

/*
Name: printGrid
Process: Prints the current state of the grid
Function input/parameters: grid: 2-D array of ROWS rows and COLS columns
Function output/parameters: None
Function output/returned: None
Dependencies: stdio.h - printf .
*/
void printGrid(char grid[ROWS][COLS]);

/*
Name: saveCurrentState
Process: Saves the current state of the grid in the file
Function input/parameters:
                grid: 2-D array of ROWS rows and COLS columns
                fptr: Pointer to a file stream
Function output/parameters: None
Function output/returned: None
Dependencies: fputc.
*/
void saveCurrentState(char grid[ROWS][COLS], FILE*fptr);

/*
Name: play
Process: Implements the game Maze Master
Function input/parameters: None
Function output/parameters: None
Function output/returned: None
Dependencies: stdio.h - printf, printGrid, saveCurrentState, initializeGrid.
*/
void play();

#endif