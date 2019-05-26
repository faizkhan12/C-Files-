/*
	Aim- To reverse the inputed number and return the reversed number 
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

void main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("The reverse number is %d\n",Reverse(num));

}
