/*
Lab 8 - Problem 1: Caesar cipher
Driver: Mason Gyllenberg-Nabbefeld 6236278
Navigator: Elijah Sprouse 6228051
*/

//header files
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//declare function prototype
void encrypt(char *message, int shift);

int main()
{
	//print title
		//function: printf
	printf("A program to encrypt message using caeser cypher:\n");
	printf("=================================================\n");

	//declare variables
		//string with length 100 named message
	char message[100];
		//int named shift
	int shift;

	//ask for user input
		//prompth user for message
			//function: printf
	printf("Input a message to encrypt: ");

		//scan and store message
			//function: fgets
	fgets(message, sizeof(message), stdin);

		//prompt user for shift
			//function: printf
	printf("\nInput the value of shift for Caesar cypher: ");

		//scan and store shift
			//function: scanf
	scanf("%d", &shift);

		//call the function encrypt
	encrypt(message, shift);

		//print encrypted message
			//function: printf
	printf("\nEncrypted message is:%s", message);

		//end program with message
			//function: printf
	printf("\nEnd program.");

	return 0;
}

//define void function encrypt
void encrypt(char *message, int shift)
{
	//declare int named size and initialize it with the length of the message
		//function: strlen
	int size = strlen(message);

	//begin for loop from 0 to size
	for(int i = 0; i <= size; i++)
	{
		//check if character is in the alphabet
		if (isalpha(message[i]) != 0)
		{
			//if it is, convert it to uppercase
			message[i] = toupper(message[i]);

			//encrypt the character by shifting it shift posistions
			message[i] = ((message[i] + shift - 'A') % 26 ) + 'A';
		}
	}
}
			