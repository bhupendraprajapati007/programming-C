#include<stdio.h>
void main()
{
	int i,k,r=1,m=0,c,n;
	printf("enter the number\n");
	scanf("%d",&i);
	n=i;
	while(i!=0)
	{
		k=i%10;
		c=k;
		r=1;
		//printf("%d  ",k);
		while(c!=0)
		{
			r=r*c;
			c=c-1;
		}
		//printf("%d\n",r);
		m+=r;
		i=i/10;
	}
	printf("%d\n",m);
	if(n==m)
	printf("entered number is strong numbre\n");
	else
	printf("entered number is not an strong number\n");
}
