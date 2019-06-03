/*
	Aim - To add elements of an array
	Author - @Faiz Khan
*/

#include<stdio.h>
#define SIZE 10
void main()
{
	int arr[SIZE],i,sum=0;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the value for arr[%d] :",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum = %d\n",sum);
}
