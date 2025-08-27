#include<stdio.h>
int main()
{
	int a,b=0,c;
	for(a=1;a<100;){
		b=b+a;
		a=a+2;
	}
	
	printf("%d",b);
	return 0;
}
