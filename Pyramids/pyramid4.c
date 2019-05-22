/* 
	Author - @Faiz Khan
	Output-------------
	Enter the no. of terms: 4
	2
        3 4
        4 5 6
        5 6 7 8
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
                        printf("%d",i+j);
                }
        printf("\n");
        }
}

