/*
Lab 6 - Problem 2: Reverse array elements
Driver: Elijah Sprouse 6228051
Navigator: Mason Gyllenberg-Nabbefeld 6236278
*/

// header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constant declaration
#define MAXSIZE 100

// prototypes
int generateRandomNumber(int maxNumber);
    // Add required function prototype here
void swap(int*number1, int*number2);

void reverseArray(int myArray[], int size);

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
        // Declaring an array of "size" elements
    int myArray[size];

        // show title
            // function: printf
    printf("A program to reverse the order of elements in an array\n");
    printf("==================================================\n\n");

    // Process the data
        // for each index in the array
    for(int i = 0; i < size; i++)
    {
        // Populate array elements
            // function: generateRandomNumber()
        myArray[i] = generateRandomNumber(MAXSIZE);
    }

        // Display array data
            // Prompt for displaying array data
                // function: printf
    printf("The elements in the array before reversing are: ");
        // for each index in the array
    for(int i = 0; i < size; i++)
    {
        // Display the current element data in array
            // function: printf()
        printf("%d ", myArray[i]);
    }
    // Add new line
        // function: printf()
    printf("\n\n");

        // Write code here
	
	// call function reverseArray to reverse the order of the elements in
	// the array
	reverseArray(myArray, size);






        // Display array data
            // Prompt for displaying array data
                // function: printf
    printf("The elements in the array after reversing are: ");
        // for each index in the array
    for(int i=0;i<size;i++)
    {
        // Display the current element data in array
            // function: printf()
        printf("%d ", myArray[i]);
    }
    // Add new line
        // function: printf()
    printf("\n");

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

int generateRandomNumber(int maxNumber)
{
    // Generate a random number between 1 and maxNumber
        // function: rand()
    int randomNum = (rand() % maxNumber) + 1;
    // Return generated random number
    return randomNum;
}


// Add function definition here



/*
Name: swap
Process: swaps two given numbers
Function input/parameters: pointers number1 and number2
Function output/parameters: pointers number1 and number2
Function output/returned: None (void)
Dependencies: None
*/

void swap(int*number1, int*number2)
{
	//use addition/subtraction logic to swap the values of the numbers
		//make number1 the sum of both numbers
	*number1 = *number1 + *number2;
		//make number2 the difference of the sum and itself
	*number2 = *number1 - *number2;
		//make number1 the difference of the sum and new number2
	*number1 = *number1 - *number2;
}




/*
Name: reverseArray
Process: reverses the order of the elements of given array
Function input/parameters: myArray[] and int size of the array
Function output/parameters: myArray[], in reverse order
Function output/returned: None (void)
Dependencies: None
*/

void reverseArray(int myArray[], int size)
{
	//declare variables
		//int start and int end
	int start = 0;
	int end = size - 1;
	
	//while loop to iterate while start is less than end
	while(start < end)
	{
		//use swap() function to swap elements of myArray at index
		//start and index end
		swap(&myArray[start], &myArray[end]);
		//increment start by one and decrement end by one
		start++;
		end--;
	}
}