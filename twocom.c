#include<stdio.h>
#include<math.h>
void main()
{
	unsigned char p=0,v=0;
	unsigned int i,s=0,n=0;
	int z=0;
	char arr[10]={};	
	printf("enter the binary number\n");
	scanf("%d",&i);
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
	s=s+1;
	while(s!=0)
	{
		arr[z]=s%2;
		s=s/2;		
		//printf("%d",v);
		z++;	
	}
	while(z!=0)
	{
	z--;
	printf("%d",z);
	}
}
