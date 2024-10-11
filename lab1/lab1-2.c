/*
Lab 1 - Problem 2: grade report
Driver: Elijah Sprouse 6228051
Navigator: Mason Gyllenberg-Nabbefeld 6236278
*/

//header files
#include <stdio.h>

//main program
int main()
{
	//initialize program
	    //declare two student names as strings and two grades with double
	char student1[10];
	char student2[10];
	double grade1;
	double grade2;
		
	//print title
		//function: printf
	printf("Grade Report\n");
	printf("============\n\n");
	
	//get user input
		//prompt user input
	        //function: printf
	printf("Type the first student's name: ");
	
		
	    //read user input
			//function: scanf
	scanf("%9s", student1);
			
	    //prompt user input
			//function: printf
	printf("Type the first student's grade (0-100): ");
			
		//read user input
			//function: scanf
	scanf("%lf", &grade1);
			
		//prompt user input
			//function: printf
	printf("Type the second student's name: ");
			
		//read user input
			//function: scanf
	scanf("%9s", student2);
	
	    //prompt user input
			//function: printf
	printf("Type the second student's grade (0-100): ");
	
		//read user input
			//function: scanf
	scanf("%lf", &grade2);	
	
	
	//print formatted message
		//function: printf
	printf("\n| %-24s | %-13s |\n", "Student Name", "Student Grade");
	printf("---------------------------------------------\n");
	printf("| %-24s | %13.2lf | \n", student1, grade1);
	printf("| %-24s | %13.2lf | \n\n", student2, grade2);
	
	
	//end program
		//function: printf, return 0
	printf("End of program.\n\n");
	return 0;
}