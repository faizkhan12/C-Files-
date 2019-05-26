/*
        Aim- To find out whether the number given is pallindrome or not  
        Author - @Faiz Khan
*/


#include<stdio.h>
int Reverse(int n)
{
        int rev=0;
        do
        {
                rev = rev*10+n%10;
                n/=10;
        }while(n>0);
        return rev;
}

int isPallindrome(int num)
{
	if(num==Reverse(num))
		return 1;
	return 0;
}

void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(isPallindrome(num))
	{
		printf("Number is a pallindrome\n");
	}
	else
		printf("Number is not a pallndrome\n");
}
