/* 
	Author - @Faiz Khan
	Output-------------
	Enter the no. of terms: 4
	1
        1 2
        1 2 3
        1 2 3 4
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
                        printf("%d",j);
                }
        printf("\n");
        }
}

