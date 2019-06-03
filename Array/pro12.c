/*
	Aim- Pascal's Triangle
	Author - @Faiz Khan
*/

#include<stdio.h>
#define MAX 15
void main()
{
	int a[MAX][MAX];
	int i,j,n;
	printf("Enter no. ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0|| i==j)
				a[i][j]=1;
			else
				a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
