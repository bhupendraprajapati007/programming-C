#include<stdio.h>
void main()
{
	int i;
	printf("enter the number\n");
	scanf("%d",&i);
	if(i>85)
		printf("grade as A+\n");
	else if(i>70)
		printf("grade as A\n");
	else if(i>55)
		printf("grade is B\n");
	else if(i>40)
		printf("grade as C\n");
	else 
		printf("fail\n");
}
