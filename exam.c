#include<stdio.h>
void main()
{
	char i; int m=0,p=0;
	scanf("%c",&i);
	int arr[32]={};
	while(i!=0)
	{
		arr[p]=i%10;
		i=i/10;
		p++;
	}
	while(p>0)
	{
		printf("%c",arr[p]);
		p--;
	}
}
