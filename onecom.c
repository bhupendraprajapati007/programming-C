#include<stdio.h>
#include<math.h>
void main()
{
	unsigned char p=0,v=0;
	unsigned int i,s=0,n=0;
	printf("enter the binary number\n");
	scanf("%d",&i);
	//printf("%d",i);
	while(i!=0)
	{
		
		n=i%10;
		s+=(pow(2,p)*n);
		//printf("%d\t %d\t %d\t %d\t\n ",p,n,i,s);
		p++;
		i=i/10;
	}
	//printf("%b\n",~s);
	s=~s;
	while(p>0)
	{
		v=s%2;
		s=s/2;
		printf("%d",v);
		p--;	
	}
}
