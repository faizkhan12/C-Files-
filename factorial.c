#include<stdio.h>
void main()
{
	int n,i,num;
	long fact=  1;
	printf("Enter a number\n",&n);
	scanf("%d",&n);
	num = n;
	if(n<0)
	{
		printf("No factorial number");
	}
	else
	{
		while(n>1)
		{
			fact*=n;
			n--;
		}
		printf("Factorial of %d is %ld",num,fact);
	}
}
