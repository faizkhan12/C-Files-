/*
	Aim - Program to convert a decimal number to Binary,octal or hexadeciaml
	Author - @Faiz Khan
*/

#include<stdio.h>
void Func(int num,int b)
{
	int i=0,j,rem;
	char arr[20];
	while(num>0)
	{
		rem = num%b;
		num/=b;
		if(rem>9 && rem<16)
			arr[i++] = rem-10+'A';
		else
			arr[i++]=rem+'0	';
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",arr[j]);
	}
}

void main()
{
	int num,ch;
	printf("Enter a deciamal number :");
	scanf("%d",&num);
	printf("1.Binary Number\n2.Octal Number\n3.Hexadeciaml Number\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Binary Number is ");
			Func(num,2);
			break;
		case 2:
			printf("Octal Number is ");
			Func(num,8);
			break;
		case 3:
			printf("Hexadecimal number is ");
			Func(num,16);
			break;
	}
	printf("\n");
}
