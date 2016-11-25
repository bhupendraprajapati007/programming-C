#include<stdio.h>
void main()
{	
	int i,j=0,k=0;
	printf("enter the number\n");
	scanf("%d",&i);
	while(i!=0)
	{
		j=i%10;
		k=j+k;
		i=i/10;
	}
	printf("%d\n",k);
}
