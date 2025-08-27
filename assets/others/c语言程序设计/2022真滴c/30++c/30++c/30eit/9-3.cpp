#include<stdio.h>
int main()
{
	double b;
	int a=1;
	b=12.0;
	printf("%d %lf\n",a,b);
	for(a;a<=19;a++){
		b=b*1.20;
		printf("%d %f\n",a,b);
	}
	return 0;
}
