/*
Aim - A currency program which will tell how many notes will be needed for a given amount of time 
Author - @Faiz Khan 
*/

#include<stdio.h>
void main()
{
	int n,ch,notes;
	printf("Enter the total amount of money :");
	scanf("%d",&n);
	printf("Enter the value of notes from where you want to begin :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 100:
			notes = n/100;
			printf("Number of 100 Rupees notes = %d\n",notes);
			n%=100;

		case 50:
			notes = n/50;
			printf("Number of 50 Rupees notes = %d\n",notes);
			n%=50;

		case 20:
			notes = n/20;
			printf("Number of 20 rupees notes = %d\n",notes);
			n%=20;

		case 10:
			notes = n/10;
			printf("Number of 10 rupees notes = %d\n",notes);

		default:
			printf("Enter the valid amount");
			break;
	}
}

