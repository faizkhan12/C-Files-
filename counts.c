#include<stdio.h>
void main()
{
	int n,rem,count=0;
	printf("Enter a number");
	scanf("%d",&n);
	do
	{
		n/=10;
		count++;
	}while(n>0);
	printf("Number of digits is %d",count);
}
