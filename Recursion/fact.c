#include<stdio.h>
long int fact(int n)
{
	if(n==0)
		return 1;
	return (n * fact(n - 1));
}

void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num<0)
		printf("Error");
	else
		printf("Factorial of %d is %ld ",num,fact(num));
}
