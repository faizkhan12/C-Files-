
/*
        Aim-Function with no arguments but a return type
        Author - @Faiz Khan
*/

#include<stdio.h>
int func()
{
	int num,sum=0;
	for(num=1;num<=25;num++)
	{
		if(num%2!=0)
			sum+=num*num;
	}
	return sum;
}

void main()
{
//	func();
	printf("%d",func());
}
