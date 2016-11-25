#include<stdio.h>
void main()
{
	char c;
	printf("enter the alphabet\n");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("alphabet is a vowel\n");
		break;
		default:
			printf("alphabet is not a vowel\n");
	}
}
