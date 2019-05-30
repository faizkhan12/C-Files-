#include<stdio.h>
#include<ctype.h>
void main()
{
	char ch;
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	switch(tolower(ch))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Alphabet is a vowel ");
			break;
		default:
			printf("Alphabet is a consonant ");
	}
}
