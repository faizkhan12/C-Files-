#include<stdio.h>
int factorial(int n)
{
	int i;
	int fact=1;
	if(n==0)
		return 1;
	for(i=n;i>1;i--)
	{
		fact*=i;
	}
	return fact;
}
void main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Invalid number ");
	}
	else
		printf("Factorial of %d is %d",num,factorial(num));
}
