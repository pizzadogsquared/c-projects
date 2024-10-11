/*
Lab 10 - Problem 1: To-Do List
Driver: Elijah Sprouse 6228051
Navigator: N/A
*/

//include header
#include <stdio.h>
#include <string.h>

//main function
int main()
{
	//initialize variables
	char task[100];
	char userChoice = 'y';
	int counter = 0;
	
	//print title to user
	printf("A program to build a To-Do list.\n");
	printf("=================================\n");
	
	//open the file
		//function: fopen
	FILE * file = fopen("toDoList.txt", "w");
	
	//check if pointer tofile stream is NULL
	if (file == NULL)
	{
		//print error message to user
		printf("Error in opening the file");
		
		//close file stream
		fclose(file);
		
		//return function success
		return 0;
	}
	
	//execute while loop to execute while user enters yes
	while ((userChoice != 'n') && (userChoice != 'N'))
	{
		//prompt the user for input
			//function: printf
		printf("Input a task: ");
		
		//this flushes the stream on every iteration of the loop other
		//than the first
		if (counter != 0)
		{
			//flush the stream
			scanf("%c", (char *) stdin);
		}
		
		//get user input
			//function: scanf
		fgets(task, sizeof(task), stdin);
			
		//write the string to the text file
			//function: fputs
		fputs(task, file);
		
		//prompt the user for input
			//function: printf
		printf("Do you want to add another task (Y/N)? ");
		
		//get user input
			//function: getchar
		userChoice = getchar();	
		
		//increase counter
		counter++;
	}
	
	//close the file
		//function: fclose
	fclose(file);
	
	//end program with message
		//function: printf
	printf("\nEnd of program.");
		
	//return function success
	return 0;
}

















