#include<stdio.h>
void main()
{
	int i=0,k;
	printf("enter the value\n");
	scanf("%d",&k);
	i=k;
	char arr[20][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","sevente	  en","eighteen","nineteen"};	
	char arr1[10][10]={"","","twenty", "thirty","forty","fifty","sixty","seventy","eighty","ninety","hundred"};
	int num[2],j=0;

	while(i!=0)
	{
		num[j++]=i%10;
		i/=10;
	}
	if(num[1]==1)
	printf("%s\n",arr[k]);
	else if(num[0]==0)
	printf("%s\n",arr1[num[1]]);
	else
	printf("%s %s\n",arr1[num[1]],arr[num[0]]);

}
