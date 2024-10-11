/*
Lab 10 - Problem 1: To-Do List
Driver: Elijah Sprouse 6228051
Navigator: N/A
*/

//include header
#include <stdio.h>

//main function
int main()
{
	//initialize variables
	char ch = '_';
	char fileName[100];
	
	//print a title message to the user
		//function: printf
	printf("A program to separate vowels in a file");
	
	//prompt user input
		//function: printf
	printf("\nInput file name to separate vowels: ");
	
	//get user input
		//function: scanf
	scanf("%s", fileName);
		
	//open input file in read mode
	FILE * infile = fopen(fileName, "r");

	//open consonants.txt in write mode
	FILE * outfile = fopen("consonants.txt", "w");

	//check if pointer to file is null
	if ((infile == NULL) || (outfile == NULL))
	{
		//print error message to user
		printf("\nError in opening the file");
		
		//close file streams
		fclose(infile);
		fclose(outfile);
		
		//return function success
		return 0;
	}
	
	ch = fgetc(infile);
	//while loop to iterate through characters in fileName
	while (ch != EOF)
	{
		//check if character is not vowel
		if ((ch != 'a') && (ch != 'e') && (ch != 'i') && (ch != 'o')
			&& (ch != 'u') && (ch != 'A') && (ch != 'E') && (ch != 'I')
			&& (ch != 'O') && (ch != 'U'))
		{
			//if true, write to output file
			fputc(ch, outfile);
		}
		ch = fgetc(infile);
	}
	
	//close files
	fclose(infile);
	fclose(outfile);
	
	//end program
	printf("\nEnd of program.");
	
	//return function success
	return 0;
	
}