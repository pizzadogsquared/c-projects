/*
Lab 8 - Problem 2: Palindrome checker
Driver: Elijah Sprouse 6228051
Navigator: Mason Gyllenberg-Nabbefeld 6236278
*/

//header files
#include <stdio.h>		//for printf and scanf
#include <string.h>		//for strlen
#include <stdbool.h>	//for bool data type
#include <ctype.h>		// for tolower


//function prototype
bool isPalindrome(const char *message);


//main function
int main()
{
	//initialize variables
		//string of length 100 (myWord)
		//boolean (result)
	char myWord[100];
	bool result;
	int size;
	
	//print title message
		//function: printf
	printf("A program to check if a given word is a palindrome:\n");
	printf("==================================================\n");
	
	//prompt user input
		//function: printf
	printf("Input a word: ");
	//get user input
		//function: fgets, sizeof
	fgets(myWord, sizeof(myWord), stdin);
	
	//format myWord to remove newline character
		//define size by entering length of myWord
	size = strlen(myWord) - 1;
		//iterate through true length of myWord
	for (int i = 0; i < size; i++)
	{
		//check if myWord contains the newline character and has at least
		//one other character
		if ((size > 0) && (myWord[size] == '\n'))
		{
			//if so, replace the new line character with the null character
			myWord[size] = '\0';
		}
	}
	
	//determine whether or not function is a palindrome, store in result
		//function: isPalindrome
	result = isPalindrome(myWord);
	
	//check if result is true
	if(result == true)
	{
		//if so, print a message confirming word is palindrome
			//function: printf
		printf("\nThe word %s is a palindrome.", myWord);
	}
	//otherwise, this block will run
	else
	{
		//if the result is false, print message saying word is not palindrome
			//function: printf
		printf("\nThe word %s is not a palindrome.", myWord);
	}
	
	//print end message
		//function: printf
	printf("\n\nEnd program.");
	
	//return function success
	return 0;
}


//function definition
bool isPalindrome(const char *message)
{
	//initialize variables
		//integer (size), set equal to length of string
	int size = strlen(message);
	
	//iterate from 0 to half the value of size
	for(int i = 0; i <= (size / 2); i++)
	{
		//check if message[i] is different from message[size - 1 - i]
		if(tolower(message[i]) != tolower(message[size - 1 - i]))
		{
			//if so, return false
			return false;
		}
	}
	
	//return true
	return true;
}























