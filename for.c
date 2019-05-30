#include<stdio.h>
void main()
{
	int a,b,i,result=0;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		result+=a;
	}
	printf("The result is %d",result);
}
