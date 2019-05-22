#include<stdio.h>
void main(){
	int n ,rem,prod=1;
	printf("Enter the digit\n");
	scanf("%d",&n);
	if(n==0){
		prod = 0;
	}
	else

		while(n>0){
		rem = n%10;
		prod*=rem;
		n/=10;
	}

	printf("Product of given digit is %d ",prod);
}
