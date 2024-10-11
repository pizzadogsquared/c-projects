/*
Lab 2 - Problem 1: Compound interest calculator
Driver: Mason Gyllenberg-Nabbefeld 6236278
Navigator: Elijah Sprouse 6228051
*/

// header files
#include <stdio.h>
#include <math.h>

// main program
int main()
{
	// initialize program
		// declare variables
			// time, compoundingFrequency as int
			// finalAmount, principalAmount, interestRate, interest as double
	int time, compoundingFrequency;
	double finalAmount, principalAmount, interestRate, interest;
		// print title
			//functions: printf
	printf("Compound interest calculator:\n");
	printf("========================================\n\n");

	
	// get user input
		// prompt user for values
			// prompt for principalAmount, interestRate, compoundingFrequency,
			//and time.
				//functions: printf, scanf

		//prompt user for principalAmount
			//function: printf
	printf("Input the value of principal amount in USD: ");
	
		//get principalAmount from user
			//function: scanf
	scanf("%lf", &principalAmount);

		//prompt user for interestRate
			//function: printf
	printf("Input the value of interest rate in %%: ");
	
		//get interestRate from user
			//function: scanf
	scanf("%lf", &interestRate);
	
		//prompt user for compoundingFrequency
			//function: printf
	printf("Input the value of compounding frequency: ");
	
		//get compoundingFrequency from user
			//function: scanf
	scanf("%d", &compoundingFrequency);
	
		//prompt user for time
			//function: printf
	printf("Input the value of time in years: ");
	
		//get time from user
			//function: scanf
	scanf("%d", &time);


	// make calculations
		// calculate finalAmount using formula
			//calculate inner parentheses first
	finalAmount = (1 + (interestRate / (100 * compoundingFrequency)));
			//calculate exponents
	finalAmount = pow(finalAmount, (compoundingFrequency * time));
			//multiply by principal
	finalAmount = principalAmount * finalAmount;
	
		// calculate interest
	interest = finalAmount - principalAmount;
		
		
		
	// show message
		//tell user finalAmount and interest
			//functions: printf
	printf("\nThe final amount is %.2lf USD ", finalAmount);
	printf("and the interest charged is %.2lf USD\n\n", interest);
	
	// end program
		//show end message
			//functions: printf
	printf("End of program");
	
	
	return 0;
}