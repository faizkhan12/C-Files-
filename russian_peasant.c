#include<stdio.h>
void main()
{
	int a,b,x,y,s=0;
	printf("Enter 1st and 2nd number\n ");
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	while(x>=1)
	{
		if(x%2!=0)
		{
			s+=y;
		}
		x/=2;
		y*=2;
	}
	printf("%d * %d =%d\t",a,b,s);
}
