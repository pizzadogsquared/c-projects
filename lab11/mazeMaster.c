/*
Lab 11 - Problem 1: Maze Master
Driver: Mason Gyllenberg-Nabbefeld 6236278
Navigator: Elijah Sprouse 6228051
*/

// header files
#include "mazeMaster_lib.h"

// main program
int main()
{
    // initialize the program
        // Seed the random number generator
            // functions: srand(), time()
    srand(time(NULL));

        // show title
            // function: printf()
    printf("Welcome to the Maze Master game!");
    printf("\n================================\n");
	
	//run gameplay loop
		//function: play
    play();

    // End the program
        // Return success
    return 0;
}
