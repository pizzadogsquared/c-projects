// header file
#include "towerOfHanoi_lib.h"

/**
 * Name: initializeTower
 * Process: initialize the source tower with disks in ascending order
 * Function input/parameters: 
            tower - an array representing the disks in tower
            size - pointer to the length of the array  
 * Function output/parameters: none
 * Function output/returned: none
 * Dependencies: none
 **/
void initializeTower(int*tower, int*size)
{
    // for each index from TOTAL_DISKS-1 till 0
    for(int i = TOTAL_DISKS-1; i >= 0 ; i--)
    {
        // Assign the value at index i to i+1
        tower[i] = i+1;
    }

    // Update the size of source tower
    *size = TOTAL_DISKS;
}

/**
 * Name: moveDisk
 * Process: moves a disk from the source tower to the target tower
 * Function input/parameters: 
            sourceTower - an array representing the disks in source tower
            sourceSize - pointer to the length of source tower  
 * Function output/parameters: 
            destinationTower - an array representing the disks in
                               destination tower
            destinationSize - pointer to the length of destination tower
 * Function output/returned: none
 * Dependencies: getDisk(), addDisk()
 **/
void moveDisk(int*sourceTower, int*destinationTower,
              int*sourceSize, int*destSize)
{
    // Check if dest tower is empty or
    // if top disk of source tower is smaller than dest tower
    if(*destSize == EMPTY_VALUE || 
        (*sourceSize != EMPTY_VALUE && sourceTower[0] < destinationTower[0]))
    {
        // get top disk from source tower
            // function: getDisk()
        int topDisk = getDisk(sourceTower, sourceSize);
        // add disk from source tower to destination tower
            // function: addDisk()
        addDisk(destinationTower, destSize, topDisk);
    }else
    {
        // if the above condition is false,
        // move disk from dest tower to source tower
        moveDisk(destinationTower,sourceTower, destSize, sourceSize);
    }
}


/**
 * Name: printTower
 * Process: Print the current status of all towers
 * Function input/parameters:
            sourceTower - an array representing the disks in source tower
            sourceSize - current size of source tower
            auxTower - an array representing the disks in auxiliary tower
            auxSize - current size of source tower
            destinationTower - an array representing the disks in 
                               destination tower
            destinationSize - current size of destination tower            
 * Function output/parameters: none
 * Function output/returned: none
 * Dependencies: none
 **/
void printTower(int*sourcetower, int*auxTower, int*destinationTower,
                    int sourceSize, int auxSize, int destinationSize)
{
    // Print the tile of towers
        // function: printf()
    printf("src   aux   dst\n");
    printf("===============\n");

    // for each index from 0 to TOWER_SIZE
    for(int i = 0; i < TOWER_SIZE; i++)
    {
        // If current index is less than source size, print the current element
        if(i < sourceSize)
        {   
            // print current element
                // function: printf()
            printf(" %d |  ",sourcetower[i]);
        }else
        {   
            // print empty space if the above condition is false
                // function: printf()
            printf("   |  ");
        }

        // If current index is less than source size, print the current element
        if(i < auxSize)
        {
            // print current element
                // function: printf()
            printf(" %d |  ",auxTower[i]);
        }else
        {
            // print empty space if the above condition is false
                // function: printf()
            printf("   |  ");
        }

        // If current index is less than source size, print the current element
        if(i < destinationSize)
        {
            // print current element
                // function: printf()
            printf(" %d   ",destinationTower[i]);
        }

        // print next line
            // function: printf()
        printf("\n");
    }

    // print next lines
        // function: printf()
    printf("\n\n");
}


// WRITE CODE HERE


/**
 * Name: addDisk
 * Process: add a given disk to the tower and update the size of tower
 * Function input/parameters: 
            tower - an array representing the disks in tower
            size - pointer to the size of the array
            disk - disk to be added to be tower  
 * Function output/parameters: none
 * Function output/returned: none
 * Dependencies: none
 **/
void addDisk(int*tower, int*size, int disk)
{
	// for loop interating through the size of the tower, decrementing
	for(int i = *size; i > 0; i--)
	{
		// move every value forward one index in the array
		tower[i] = tower[i - 1];
	}
	//move the current disc to the tower
	tower[0] = disk;
	// increment the size of the tower to indicate the change
	*size += 1;
}



/**
 * Name: getDisk
 * Process: remove the top disk of the tower and update size
 * Function input/parameters: 
            tower - an array representing the disks in tower
            size - pointer to the size of the array  
 * Function output/parameters: none
 * Function output/returned: top disk of the tower
 * Dependencies: none
 **/
int getDisk(int*tower, int*size)
{
	// declare variable topDisk and initialize
	//it with the first element in the array
	int topDisk = tower[0];
	
	//for loop that runs through the size of the tower - 1
	for (int i = 0; i < *size - 1; i++)
	{
		//assign the next value to the current one
		tower[i] = tower[i + 1];
	}
	// dereference pointer to size of tower and decrement by 1
	*size -= 1;
	
	//return topDisk
	return topDisk;
}



/**
 * Name: towerOfHanoi
 * Process: Implement the towerofHanoi puzzle
 * Function input/parameters:
            sourceTower - an array representing the disks in source tower
            sourceSize - pointer to the length of source tower
            auxTower - an array representing the disks in auxiliary tower
            auxSize - pointer to the length of auxiliary tower
 * Function output/parameters:
            destinationTower - an array representing the disks in 
                               destination tower
            destinationSize - pointer to the length of
                               destination tower
 * Function output/returned: none
 * Dependencies: initializeTower(), printTower(), moveDisk()
 **/
void towerOfHanoi(int*sourceTower, int*auxTower, int*destinationTower,
                    int*sourceSize,int*auxSize,int*destinationSize)
{	
	//initialize variables
		//integer totalMoves
	int totalMoves = pow(2, TOTAL_DISKS) - 1;
	
	//initialize the source tower (set up the game by adding disks)
		//function: initializeTower
	initializeTower(sourceTower, sourceSize);
	
	// print a message to the user displaying the table of towers
		//function: printTower
	printTower(sourceTower, auxTower, destinationTower, *sourceSize,
				*auxSize, *destinationSize);
	
	// iterate through the total number of given moves, initialized earlier
	for (int i = 1; i <= totalMoves; i++)
	{
		// check if iterable value, i, is a factor of the total disks
		if ((i % TOTAL_DISKS) == 0)
		{
			//if so, call moveDisk to move disk from aux tower
			//to destination tower
				//function: moveDisk
			moveDisk(auxTower, destinationTower,
				auxSize, destinationSize);
		}
		
		// if not, check if iterable value, i, gives a remainder of 1 when
		//dividing by total disks
		else if((i % TOTAL_DISKS) == 1)
		{
			// if so, call moveDisk to move disk from source tower
			//to destination tower
				//function: moveDisk
			moveDisk(sourceTower, destinationTower,
				sourceSize, destinationSize);
		}
		
		// if the above conditions are false, this block will run
		else
		{
			// call moveDisk to move disk from source tower
			//to auxillary tower
				//function: moveDisk
			moveDisk(sourceTower, auxTower, sourceSize, auxSize);
		}
		
		// print a message to the user displaying the table of towers
			//function: printTower
		printTower(sourceTower, auxTower, destinationTower, *sourceSize,
					*auxSize, *destinationSize);
	}
}