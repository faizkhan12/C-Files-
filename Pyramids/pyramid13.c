#include<stdio.h>
void main()
{
        int n;
        printf("Enter the number of terms : ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=n+1-i;j++)
                {
                        printf("%d",n+1-j);
                }
                printf("\n");
        }
}



