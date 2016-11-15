#include<stdio.h>
void main()
{
	int i,j,m=0,p=0,n;
	printf("enter the three digit number\n");
	scanf("%d",&i);
	n=i;
	while(i!=0)
	{
		m=i%10;
		p+=m*m*m;
		i=i/10;	
	}
	printf("%d\n",p);
	if(n==p)
	printf("enterd number is armstrong\n");
	else
	printf("enterd number is not a armstrong\n");
}
