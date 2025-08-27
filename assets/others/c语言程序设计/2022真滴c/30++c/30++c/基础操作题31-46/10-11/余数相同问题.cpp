
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,a,b,c;
	
	scanf("%d%d%d",&a,&b,&c);
	for(i=2;;i++)
	{
		if(a%i==b%i && a%i==c%i && b%i==c%i)
			break;
		if(i>a&&i>b&&i>c){ printf("没有这个余数");goto l1;}
		 
	}
	
	printf("%d",i);
	
l1:	 return 0;
}
