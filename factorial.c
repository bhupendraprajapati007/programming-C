#include<stdio.h>
void main()
{
	int n,r=1;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=r*n;
		n=n-1;
	}
	printf("%d/n",r);
}
