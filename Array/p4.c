/*
	Aim - Addition of 2 matrices
	Author - @Faiz Khan
*/

#include<stdio.h>
#define A 3
#define B 4
void main()
{
	int i,j,mat1[A][B],mat2[A][B],mat3[A][B];
	printf("Enter 1st matrix (%dX%d) :\n",A,B);
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
        printf("Enter 2nd matrix (%dX%d) :\n",A,B);
        for(i=0;i<A;i++)
        {
                for(j=0;j<B;j++)
                {
                        scanf("%d",&mat2[i][j]);
                }
        }
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	printf("The resultant matrix is : ");
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			printf("%5d",mat3[i][j]);
		}
		printf("\n");
	}
}
