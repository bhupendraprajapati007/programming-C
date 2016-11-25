#include<stdio.h>
void main()
{
	int i,j,k=0,l=1,m;
	printf("enter the series lenght\n");
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		m=k+l;
		printf("%d\t",m);
		k=l;
		l=m;
	}
}	
