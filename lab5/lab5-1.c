/*
Lab 5 - Problem 1: Fibonacci series
Driver: Elijah Sprouse (6228051)
Navigator: Mason Gyllenberg-Nabbefeld (6236278)
*/

//header files
#include <stdio.h>


//declare function prototypes
void generateFibonacci(int n);


//main program
int main()
{
	//initialize variables
		//integer "n"
	int n;
	
	
	//print title message
		//function: printf
	printf("A program to print first n elements in the fibonacci series");
	printf("\n==================================================");
	
	
	//get user input
		//prompt user to input positive int n
			//function: printf
	printf("\nInput the value of number n: ");
	
		//read user input
			//function: scanf
	scanf("%d", &n);
		
		
	//if statement to check if n is less than 2
	if (n < 2)
	{
		//if so, print a message telling user n must be greater than 1
			//function: printf
		printf("\n\nInput a positive number greater than 1 for n");
	}		
			
	//else statement
	else
	{
		//else, call function generateFibonacci
		generateFibonacci(n);
	}
	
	
	//print end message
		//function: printf
	printf("\n\nEnd of program.");

	
	//return function success
	return 0;
	
}


//define other functions
void generateFibonacci(int n)
{
	//initialize variables
		//integer array "fibonacci" with length n
			//initialize with first two elements = [0, 1]
	int fibonacci[n];
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	
	//for loop to iterate from 2 to n - 1
	for (int i = 2; i < n; i++)
	{
		//calculate sum of (i - 1) and (i - 2) in array
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	
	//print message to user with variable n
		//function: printf
	printf("\n\nThe first %d terms in the fibonacci series are: ", n);
	
	
	//for loop to iterate from 0 to n - 1
	for(int i = 0; i < n; i++)
	{
		//print value of i in array fibonacci
			//function: printf
		printf("%d ", fibonacci[i]);
	}
}


















