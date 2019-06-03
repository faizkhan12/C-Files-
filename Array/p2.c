/*
	Aim - To convert a decimal number to binary number
	Author- @Faiz Khan
*/

#include<stdio.h>
#define SIZE 10
void main()
{
	int arr[SIZE],i,j,num;
	printf("Enter a decimal number: ");
	scanf("%d",&num);
	//i=0;
	for(i=0;num>0;i++)
	{
		arr[i]=num%2;
		num/=2;
	}
/*	while(num>0)
	{
		arr[i] = num%2;
		num/=2;
		i++;
	}
*/
	printf("Binary Number: ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	printf("\n");
}

