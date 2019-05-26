/*
	Aim- To find permutation and combination
	Author - @Faiz Khan
*/

#include<stdio.h>
int Factorial(int n)
{
	int i,fact=1;
	if(n==0)
		return 1;
	for(i=n;i>1;i--)
		fact*=i;
	return fact;
}

int Perm(int n,int r)
{
	int p;
	p = Factorial(n)/Factorial(n-r);
	return p;
}
int Comb(int n,int r)
{
	int c;
	c = Perm(n,r)/Factorial(r);
	return c;
}

void main()
{
	int n,r;
	printf("Enter n and r ");
	scanf("%d%d",&n,&r);
	printf("Total combuination is %d ",Comb(n,r));
	printf("Total permutation is %d ",Perm(n,r));
}
