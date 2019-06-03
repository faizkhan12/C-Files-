/*
	Aim - To implement a 2-D array
	Author - @Faiz Khan
*/

#include<stdio.h>
#define A 3
#define B 4
void main()
{
	int mat[A][B],i,j;
	printf("Enter the elements of the matrix(%dX%d) :\n",A,B);
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The matrix is :\n");
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
