/* 
	Author - @Faiz Khan
	Output-------------
	Enter the no. of terms: 4
	1
        2 2
        3 3 3
        4 4 4  4
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
                        printf("%d",i);
                }
        printf("\n");
        }
}

