#include<stdio.h>
int main()
{
	int a=300,b=20;
	printf("    ");
	
	printf("%7d\n",a);
	printf("   -");
	printf("%7d\n",b);
	printf("--------------------\n");
	printf("    "); printf("%7d\n",a-b);
	return 0;
}
