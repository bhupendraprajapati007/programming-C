#include<stdio.h>
void main()
{
	int i,n,j=0,r;
	printf("enter  the number\n");
	scanf("%d",&i);
	n=i;
	while(i!=0)
	{		
		r=i%10;
		j=j*10+r;
		i=i/10;
	}
	printf("%d\n",j);
	if(j==n)
	printf("enterd number is palindrome\n");
	else
	printf("entred number is not palindrome\n");
}
		
