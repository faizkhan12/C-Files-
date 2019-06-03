
#include<stdio.h>
#define R1 3
#define C1 4
#define R2 C1
#define C2 2
void main()
{
	int i,j,k,mat1[R1][C1],mat2[R2][C2],mat3[R1][C2];
	printf("Enter 1st matrix(%dX%d) :",R1,C1);
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter 2nd matrix(%dX%d) :",R2,C2);
        for(i=0;i<R2;i++)
        {
                for(j=0;j<C2;j++)
                {
                        scanf("%d",&mat2[i][j]);
                }
        }
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<C1;k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	printf("The resultant matrices are :");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
			printf("%5d",mat3[i][j]);
		}
		printf("\n");
	}
}
