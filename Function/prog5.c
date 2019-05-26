#include<stdio.h>
int Binary(int num)
{
	int a=1,bin=0,rem;
	while(num>0)
	{
		rem=num%2;
		bin=bin+rem*a;
		num/=2;
		a*=10;
	}
	return bin;
}

void main()
{
	int num;
	printf("Enter the decimal number ");
	scanf("%d",&num);
	printf("Decimal=%d, Binary = %d ",num,Binary(num));
}
