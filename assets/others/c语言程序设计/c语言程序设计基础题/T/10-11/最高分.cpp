
#include<stdio.h>
//#include<string.h>

int main()
{
	int i;
	int data,max=0;
	printf("Peter的5门课分数分别是：\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&data);
		if(data>max) max=data;
		
	}
	
	printf("最高分是：%d",max);
	 return 0;
}
