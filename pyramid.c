#include<stdio.h>
void main()
{	
	int i,j,k=0;
	printf("enter the number of line \n");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{	
		for(k=1;k<=i;k++)
		printf("*");
		printf("\n");
	}
}
