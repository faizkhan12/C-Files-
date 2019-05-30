#include<stdio.h>
int Fib(int n)
{
	if(n==0 || n==1)
		return 1;
	return(Fib(n-1) + Fib(n-2));
}

void main()
{
	int num,i;
	printf("enter the no of terms :");
	scanf("%d",&num);
	for(i=0;i<num;i++)
		printf("%d ",Fib(i));
	printf("\n");
}
