#include<stdio.h>
void main()
{
	int n,rem,j=1,dec=0,d,nsave;
	printf("Enter a binary number\n");
	scanf("%d",&n);
	nsave=n;
	while(n>0)
	{
		rem = n%10;
		d = rem*j;
		dec+=d;
		j*=2;
		n/=10;
	}
	printf("Decimal nuumber of %d is %d",nsave,dec);
}
