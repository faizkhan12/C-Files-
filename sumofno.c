#include<stdio.h>
void main()
{
	int n,sum=0;
	do
	{
		printf("Enter a number");
		scanf("%d",&n);
		sum+=n;
	}while(n!=0);
	printf("Sum=%d",sum);
}
