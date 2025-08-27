#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个年份：");
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||a%400==0)
	{
		printf("%d是闰年",a);
	}
	else
	{
		printf("%d是平年",a);
	}
 }

