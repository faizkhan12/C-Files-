/*
	Aim-Function with no arguments and no return type
	Author - @Faiz Khan
*/

#include<stdio.h>
void displaymenu()
{
	printf("1. Create a database\n");
	printf("2. Insert new records\n");
	printf("3. Modify a record\n");
	printf("4. Delete a record\n");
	printf("5. Display all records\n");
	printf("6.Exit\n");
}

void main()
{
	int ch;
	displaymenu();
	printf("Enter your choice");
	scanf("%d",&ch);
}
