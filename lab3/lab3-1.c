/*
Lab 3 - Problem 1: Factorial calculator
Driver: Elijah Sprouse 6228051
Navigator: Mason Gyllenberg-Nabbefeld 6236278
*/

//header files
#include <stdio.h>

//main program
int main()
{
	//initialize program
		//declare variables
			//int factorial, int n
	int factorial = 1, n;
	
	//print title
		//function: printf
	printf("A program to calculate the factorial of a number n\n");
	printf("================================\n");
	
	//get user input
		//prompt user for variable n
			//function: printf
	printf("Input the value of number n: ");
		
		//get user input for variable n
			//function: scanf
	scanf("%d", &n);
		
	
	//perform calculations
		//check if n is negative
		if (n < 0)
		{
			//if so, print a message that n! cannot be calculated
				//function: printf
			printf("\nFactorial is not defined for negative numbers\n\n");
		}	
		//if n is not negative, check if n is zero
		else if(n == 0)
		{
			//if n is zero, print that n! is 1
				//function: printf
			printf("\nThe factorial of the number 0 is 1.\n\n");
		}
		//if both previous conditions are false, n is a positive nonzero int
		//(else statement)
		else
		{
			//execute a for loop to iterate from 1 to n
			for (int i = 1; i <= n; i++)
			{
				//for every iteration, multiply the factorial by the current
				//loop value
				factorial = factorial * i;
			}
			//after the for loop, print messasge giving factorial
				//function: printf
			printf("\nThe factorial of the number"
			" %d is %d.\n\n", n, factorial);
		}
	
	//end program
		//print end message to user
			//function: printf
	printf("End of program.");
	
	//return function success
	return 0;
}