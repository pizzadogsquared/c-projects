/*
Lab 6 - Problem 1: Swap the values of two variables
Driver: Mason Gyllenberg-Nabbefeld 6236278
Navigator: Elijah Sprouse 6228051
*/

// header files
#include <stdio.h>

//declare function prototype named swap
//function takes a pointer to int number1 and int number2 and returns void
void swap(int*number1, int*number2);

//main function
int main()
{
	//print a title
		//function: printf
	printf("Swap the values of two variables\n");
	printf("===================================\n\n");

	//declare variables for two numbers as int
	int number1,number2;

	//prompt user for number1
		//function: printf
	printf("Input the value of the first number: ");

	//read the user input
		//function: scanf
	scanf("%d", &number1);

	//prompt user for number2
		//function: printf
	printf("Input the value of the second number: ");

	//read the user input
		//function: scanf
	scanf("%d", &number2);

	//print message that shows what the number are before swapping
		//function: printf
	printf("\nThe value of the first number is %d and the value of the",number1);
	printf(" second number is %d before swapping.\n",number2);

	//call the swap function to swap the numbers
	swap(&number1,&number2);

	//print a message that shows the numbers after swapping
		//function: printf
	printf("The value of the first number is %d and the value of the",number1);
	printf(" second number is %d after swapping.\n",number2);

	//end program
		//print end message to user
			//function: printf
	printf("\nEnd of program.");
	
	//return function success
	return 0;
}

//define a function named swap that takes two variables and swapping them
void swap(int*number1, int*number2)
{
	//declare int named temp to temporary hold numbers during swapping
	int temp = 0;

	//derefrence the address of number1 and store value in temp
	temp = *number1;

	//derefrence the address of number2 and store value in number1
	*number1 = *number2;

	//store value of temp in number2 
	*number2 = temp;
}