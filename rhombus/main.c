#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");

        }
    printf("\n");
    }
    //}
    return 0;
}
