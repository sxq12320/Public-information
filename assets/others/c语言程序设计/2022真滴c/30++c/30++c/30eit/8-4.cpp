#include<stdio.h>
int main()
{
	long a,b=1,i;
	scanf("%ld",&a);
	for(i=1;i<=a;i++){
		b=b*i;
	}
	printf("%ld",b);
	
	return 0;
}
