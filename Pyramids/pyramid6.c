/* 
	Author - @Faiz Khan
	Output-------------
	Enter the no. of terms: 4
	1
        2 3
        4 5 6
        7 8 9 10
*/

#include<stdio.h>
void main()
{
        int n,p=1;
        printf("Enter the no. of terms");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=i;j++)
                {
                        printf("%3d",p++);
                }
        printf("\n");
        }
}

