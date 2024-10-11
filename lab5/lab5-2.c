/*
Lab 5 - Problem 2: Max & Min
Driver: Mason Gyllenberg-Nabbefeld 6236278
Navigator: Elijah Sprouse 6228051
*/

// header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constant declaration
#define MAXSIZE 100

// prototypes
int generateRandomNumber(int maxNumber);

// main program
int main()
{
    // initialize the program
        // Seed the random number generator
            // functions: srand(), time()
    srand(time(NULL));

        // Variable declaration
            // functions: generateRandomNumber()
    int size = generateRandomNumber(MAXSIZE);
    int max,min;
        // Declaring an array of "size" elements
    int myArray[size];

        // show title
            // function: printf
    printf("A program to find the max and min element in the array\n");
    printf("==================================================\n");

    // Process the data
        // for each index in the array
    for(int i=0;i<size;i++)
    {
        // Populate the array elements
            // function: generateRandomNumber()
        myArray[i] = generateRandomNumber(MAXSIZE);
    }

        // Display array data
            // Prompt for displaying array data
                // function: printf
    printf("The elements in the array are: ");
        // for each index in the array
    for(int i=0;i<size;i++)
    {
        // Display the current element data in array
        printf("%d ",myArray[i]);
    }
    printf("\n");

        // Write code here

    // store the first number as the min and the max
    min = MAXSIZE;
    max = 1;
    //begin a for loop that will iterate through each index in the array
    for(int i = 0; i<size;i++)
    {
        //inside the for loop, check if the element is greater than the max
        if (myArray[i] > max)
        {
            // if true, update the max to the new max
            max = myArray[i];
        }

        //if not, check if the element is smaller than the min
        if (myArray[i] < min)
        {
            //if it is, update the min value
            min = myArray[i];
        }
    }

    // Display max and min elements in the array
        // print maximum and minimum elements
            // function: printf
    printf("\nThe maximum element is %d and the minimum element is %d.\n",
           max,min);

    // End the program
        // Print a message
            // function: printf
    printf("\nEnd program.");
        // return success;
    return 0;
}

// supporting functions
/*
Name: generateRandomNumber
Process: generates a random number
Function input/parameters: maxNUmber: Maximum number in random number generator
Function output/parameters: None
Function output/returned: randomNum: Generated random number
Dependencies: time.h, stdlib.h - rand, time.
*/

int generateRandomNumber(int maxNumber) {

    // Generate a random number between 1 and maxNumber
        // function: rand()
    int randomNum = (rand() % maxNumber) + 1;
    // Return generated random number
    return randomNum;
}