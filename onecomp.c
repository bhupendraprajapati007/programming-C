#include<stdio.h>
#include<math.h>
void main()
{
	int x;
	int r,z=0,res=0;
	bool arr[32]={};
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		
		//res+=(pow(10,z)*(!r));
		printf("%d",!r);
		x/=10;
		//z++;
	}
	//printf("\n%d",res);
}
