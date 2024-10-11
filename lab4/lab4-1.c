/*
Lab 4 - Problem 1: Perfect number checker
Name: Elijah Sprouse (6228051)
*/

//header files
#include <stdio.h>

//main program
int main()
{
	//initialize program
		//declare variables
			//ints n and sumOfFactors
			//set sumOfFactors equal to 0
	int n, sumOfFactors = 0;
	
	//print title
		//function: printf
	printf("A program to check if a number n is a perfect number\n");
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
		printf("\nPerfect numbers are defined only for positive"
			" integers greater than 1.");
	}	
	
	
		//(else) if previous condition is false, then n is an integer > 1
	else
	{
			//iterate 1 through n-1 to check if the current number, i, is a
			//divisor that leaves a remainder of 0 (modulus), AKA factor
		for (int i = 1; i <= (n - 1); i++)
		{
			//if i is a factor, add i to sumOfFactors
			if (n % i == 0)
			{
				sumOfFactors += i;
			}
		}
		//after for loop, check if sumOfFactors equals n
		if (n == sumOfFactors)
		{
			//if so, print that n is a perfect number
				//function: printf
			printf("\n%d is a perfect number.", n);	
		}		
		else
		{
			//(else) if not, print that n is not a perfect number
				//function: printf
			printf("\n%d is not a perfect number.", n);
		}	
	}		
			
	
	//print message to user
		//function: printf
	printf("\n\nEnd of program.");
	
	//end program
	return 0;
}