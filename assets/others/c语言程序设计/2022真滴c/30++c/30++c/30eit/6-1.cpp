#include<stdio.h>
int main()
{
	int a;
	printf("������һ����ݣ�");
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||a%400==0)
	{
		printf("%d������",a);
	}
	else
	{
		printf("%d��ƽ��",a);
	}
 }

