#include<stdio.h>
int pFact(int num)
{
	int i;
	for(i=2;num!=1;i++)
	{
		while(num%i==0)
		{
			printf("%d, ",i);
			num/=i;
		}
	}
}

void main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	pFact(num);
	printf("\n");
}
