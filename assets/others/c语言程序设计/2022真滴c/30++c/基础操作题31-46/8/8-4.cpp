
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,n; long  fact=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact*=i;
	}
	printf("%ld\n",fact);
	
	 return 0;
}
