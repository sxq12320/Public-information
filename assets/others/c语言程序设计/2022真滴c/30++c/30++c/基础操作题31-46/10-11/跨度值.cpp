
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,n;
	int data,max=0,min=100;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		if(data>max) max=data;
		if(data<min) min=data;
	}
	
	printf("最大跨度值为%d",max-min);
	 return 0;
}
