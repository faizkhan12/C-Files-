/*
	Aim- To dispaly sum of a digit using recurssive function
	Author- @Faiz Khan
*/
#include<stdio.h>
int Sum(int n)
{
	int sum;
	if(n==0)
		return 0;
	sum = n + Sum(n-1);
	printf("%d + ",n);
	return sum;
}

void main()
{
	int n;
	printf("Enter the number of terms :");
	scanf("%d",&n);
	printf("\b\b = %d ",Sum(n)); // \b/ to remove last, + sign
}
