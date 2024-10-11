/*
Lab 7 - Problem 1: Tower of Hanoi
Driver: Elijah Sprouse 6228051
Navigator: Mason Gyllenberg-Nabbefeld 6236278
*/

// header files
#include "towerOfHanoi_lib.h"

// main program
int main()
{
    // initialize program
        // declare arrays for source, auxiliary and destination towers
    int sourceTower[TOWER_SIZE];
    int auxiliaryTower[TOWER_SIZE];
    int destinationTower[TOWER_SIZE];

        // declare variables to hold current size of source, auxiliary
        // and destination towers
    int sourceSize = 0;
    int auxiliarySize = 0;
    int destinationSize = 0;

        // Print title
            // function: printf()
    printf("\n Welcome to Tower of Hanoi!\n");
    printf("===============================\n\n");

    // begin puzzle
        // Write code here
	// call towerOfHanoi function to print the game
		//function: towerOfHanoi
	towerOfHanoi(sourceTower, auxiliaryTower, destinationTower,
                    &sourceSize, &auxiliarySize, &destinationSize);



    // End program
        // print a message
            // function: printf()
    printf("\n Thanks for playing Tower of Hanoi");
        // return success
    return 0;
}