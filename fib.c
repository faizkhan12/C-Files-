#include<stdio.h>
void main()
{
	int n;
	int x=0,y=1,z;
	printf("Enter the number of terms");
	scanf("%d",&n);
	printf("%d",y);
	for(int i=1;i<n;i++)
	{
		z = x+y;
		printf("%d",z);
		x=y;
		y=z;
	}
	printf("\n");
}
