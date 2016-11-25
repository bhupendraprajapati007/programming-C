#include<stdio.h>
#include<math.h>
void main()
{
	int i,j=0,m=0,p=0,n,l,q=0;
	printf("enter the number\n");
	scanf("%d",&i);
	n=i;
	while(i!=0)
	{
		i=i/10;
		p++;	
	}
	l=n;
	while(n!=0)
	{
		j=n%10;
		q+=pow(j,p);
		n=n/10;
	}
	printf("%d\n",q);
	if(q==l)
	printf("enterd number is armstrong\n");
	else
	printf("enterd number is not a armstrong\n");
}
