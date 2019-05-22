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

