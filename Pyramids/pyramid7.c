/* 
	Author - @Faiz Khan
	Output-------------
	Enter the no. of terms: 4
	5
        5 4
        5 4 3
        5 4 3 2
*/

#include<stdio.h>
void main()
{
        int n;
        printf("Enter the no. of terms");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=i;j++)
                {
                        printf("%d",n+1-j);
                }
        printf("\n");
        }
}

