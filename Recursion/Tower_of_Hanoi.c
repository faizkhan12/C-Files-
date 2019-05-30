#include<stdio.h>
int tofh(int n,char source,char temp,char des)
{
	if(n==1)
	{
		printf("Move Disk %d from %c to %c\n",n,source,des);
		return;
	}
	tofh(n-1,source,des,temp);
	printf("Move Disk %d from %c to %c\n",n,source,des);
	tofh(n-1,temp,source,des);
}

void main()
{
	int n;
	char source='A',temp='B',des='C';
	printf("Enter the no. of disk :");
	scanf("%d",&n);
	printf("The sequences are :\n");
	tofh(n,source,temp,des);
}
