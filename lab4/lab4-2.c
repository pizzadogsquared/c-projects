/*
Lab 4 - Problem 2: Sum of squares of even numbers
Name: Elijah Sprouse (6228051)
*/

//header files
#include <stdio.h>
#include <math.h>

//main program
int main()
{
	//initialize program
		//declare variables
			//ints n and sumOfSquares
			//set sumOfSquares equal to 0
	int n, sumOfSquares = 0;
	
	//print title
		//function: printf
	printf("A program to calculate the sum of squares of first n "
			"even numbers\n");
	printf("================================\n");
	
	//get user input
		//prompt user to input n
			//function: printf
	printf("Input the value of number n: ");
	
		//read user input
			//function: scanf	
	scanf("%d", &n);

	//perform logic and calculations
		//check if n is less than or equal to 1
	if (n <= 1)
	{
			//if true, print a message telling the user that n must be
			//greater than 1
				//function: printf
		printf("\nPlease enter a positive integer value for n.");
	}
			
			
		//(else) if previous condition is false, then n is an integer > 1
	else
	{	
			//print a message to the user telling them program is working
				//function: printf
		printf("\nCalculating the sum of squares of first n even numbers.");
			
			//iterate each even number from 2 up to 2 times n in a loop
		for (int i = 2; i <= (2 * n); i += 2)
		{
				//add the square of i to sumOfSquares for each iteration
			sumOfSquares += pow(i, 2);
			
				//print a message telling the user the current value of
				//the i variable
					//function: printf
			printf("\n\nAdding the square of even number \"%d\" to ", i);
			printf("the sumOfSquares variable.");
						
				//print a message telling the user the current value of
				//the sumofSquares variable
					//function: printf
			printf("\nCurrent value of sumOfSquares ");
			printf("variable: %d", sumOfSquares);
		}
		
		//print a message to the user telling the final sumOfSquares
			//function: printf 
		printf("\n\nThe sum of squares of first %d ", n);
		printf("even numbers is %d.", sumOfSquares);
		
	}
	//print end message
		//function: printf
	printf("\n\nEnd of program.");
	
	//end program
	return 0;
}