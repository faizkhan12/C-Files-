#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	int i;
	for(i==2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}

int Prime(int num1,int num2)
{
	int i;
	for(i=num1;num1<=num2;i++)
	if(isPrime(i))
		printf("%d",i);
}

void main()
{
	int num1,num2;
	printf("Enter the 2 numbers");
	scanf("%d%d",&num1,&num2);
	printf("Prime no. between %d and %d is :",num1,num2);
	Prime(num1,num2);
}
