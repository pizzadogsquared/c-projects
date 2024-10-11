// header file
#include "mazeMaster_lib.h"

/*
Name: generateRandomNumber
Process: generates a random number
Function input/parameters: maxNumber: Maximum number in random number generator
Function output/parameters: None
Function output/returned: randomNum: Generated random number
Dependencies: time.h, stdlib.h - rand, time.
*/
int generateRandomNumber(int maxNumber) {

    // Generate a random number between 0 and maxNumber
        // function: rand()
    int randomNum = (rand() % maxNumber);

    // Return generated random number
    return randomNum;
}

/*
Name: initializeGrid
Process: Initializes the grid at the start of the game
Function input/parameters: grid: 2-D array of ROWS rows and COLS columns
Function output/parameters: None
Function output/returned: Prints the current state of the grid
Dependencies: None.
*/
void initializeGrid(char grid[ROWS][COLS])
{
    // For each row in the grid
    for (int i = 0; i < ROWS; i++)
    {
        // For each column in the grid
        for (int j = 0; j < COLS; j++)
        {
            // Assign the value VALID_POS at current position
            grid[i][j] = VALID_POS;
        }
    }

    // Loop ROWS times
    for(int i = 0 ; i< ROWS; i++)
    {
        // Add an obstacle at a random position in the grid
            // function: generateRandomNumber()
        grid[generateRandomNumber(ROWS)][generateRandomNumber(COLS)] = OBSTACLE;
    }

    // Set the target position in the grid
    grid[ROWS-1][COLS-1] = TARGET_POS;
    // set the initial position of the player in the grid
    grid[0][0] = CHARACTER_POS;
}

// Write code here

/*
Name: printGrid
Process: Prints the current state of the grid
Function input/parameters: grid: 2-D array of ROWS rows and COLS columns
Function output/parameters: None
Function output/returned: None
Dependencies: stdio.h - printf .
*/
void printGrid(char grid[ROWS][COLS])
{
	// print a newline
		//function: printf
	printf("\n");
    //iterate through rows
    for (int i = 0; i < ROWS; i++)
    {
        //iterate through columns
        for (int j = 0; j < COLS; j++)
        {
            //print each posistion in the grid
            //function: printf
            printf("%c ", grid[i][j]);
        }
        //print a newline after each row
        //function: printf
        printf("\n");
    }
}


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
void saveCurrentState(char grid[ROWS][COLS], FILE*fptr)
{
    //iterate through rows
    for (int i = 0; i < ROWS; i++)
    {
        //iterate through columns
        for (int j = 0; j < COLS; j++)
        {
            //write the value of [i][j] to the file
                //function: fputc
            fputc(grid[i][j], fptr);
        }
        //write a newline character
			//function: fputc
        fputc('\n', fptr);
    }
    //write a newline character
		//function: fputc
    fputc('\n', fptr);
}

/*
Name: play
Process: Implements the game Maze Master
Function input/parameters: None
Function output/parameters: None
Function output/returned: None
Dependencies: stdio.h - printf, printGrid, saveCurrentState, initializeGrid.
*/
void play()
{
	// declare variables
	char grid[ROWS][COLS];
	int playerRow = 0;
	int playerCol = 0;
	int targetRow = ROWS - 1;
	int targetCol = COLS - 1;
		//declare char to track movement
	char move;
	
	// open file in write mode
	FILE * fptr = fopen("gameState.txt", "w");
	
	// check for error in opening file
	if (fptr == NULL)
	{
		//print error message to user
		printf("Error in opening files");
		
		//close file stream
		fclose(fptr);
	}
	
	else
	{
	// initialize the maze for user to play on
		//function: initializeGrid
	initializeGrid(grid);
	
	// call function to print the maze the user plays on
		//function: printGrid
	printGrid(grid);
	
	// iterate through gameplay loop
	while( ((playerRow != targetRow) || (playerCol != targetCol))
			|| ((move == 'Q') || ((move - 32) == 'Q')) )
	{
		// prompt for user input
			//function: printf
		printf("Enter a move (W/A/S/D or Q to quit): ");
		
		// read user input
			//function: scanf
		scanf(" %c", &move);
		
		// check if the player has quit
		if ( ((move - 32) == 'Q') || (move == 'Q') )
		{
			// print a message to the user telling them they quit
				//function : printf
			printf("You quit the game!\n\n");	
			break;
		}
		// run game loop if player has not quit
		else
		{
			// clear player position
			grid[playerRow][playerCol] = VALID_POS;
			
			// update player position based on if it is a valid play
			
			// first check if the player chose to move up and if it is abort
			//valid play
			if ( (((move - 32) == 'W') || (move == 'W')) 
				&& ( grid[playerRow - 1][playerCol] != OBSTACLE ) )
			{
				// update accordingly
				playerRow--;
			}
			
			// check if the player chose to move left and if it is a
			//valid play
			else if ( (((move - 32) == 'A') || (move == 'A'))
					&& ( grid[playerRow][playerCol - 1] != OBSTACLE ) )
			{
				// update accordingly
				playerCol--;
			}
			
			// check if the player chose to move down and if it is a
			//valid play
			else if ( (((move - 32) == 'S') || (move == 'S'))
					&& ( grid[playerRow + 1][playerCol] != OBSTACLE ) )
			{
				// update accordingly
				playerRow++;
			}
			
			// check if the player chose to move right and if it is a
			//valid play
			else if ( (((move - 32) == 'D') || (move == 'D'))
					&& ( grid[playerRow][playerCol + 1] != OBSTACLE ) )
			{
				// update accordingly
				playerCol++;
			}
			
			// print an error message if the player hasn't entered a valid
			//input
			else
			{
				printf("Invalid input! Please try again. \n");
			}
		}
		
		//update position
		grid[playerRow][playerCol] = CHARACTER_POS;
		
		// call function to print the maze the user plays on
			//function: printGrid
		printGrid(grid);
		
		//save the current grid in a file
			//function: saveCurrentState
		saveCurrentState(grid, fptr);
	}
	
	// check if player hasn't quit	
	if ( ((move - 32) != 'Q') && (move != 'Q') )
	{
		// print a congratulatory message
			//function: printf
		printf("Congratulations! You won the game.");
	}
	
	// close file stream
	fclose(fptr);
	}
}

/*

cd C:\Users\pizza\Desktop\sophhomework\cs136lab\lab11
gcc -Wall mazeMaster.c mazeMaster_lib.c -o output.exe


*/

















