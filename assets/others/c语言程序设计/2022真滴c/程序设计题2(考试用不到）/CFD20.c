#include <stdio.h>
double fave(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    double a;
    a=fave(n);
    printf("%.2f",a);
    return 0;
}
/*考生在以下空白处定义函数*/
double fave(int n)
{
	int i,dd;
	double sum=0.0;;
	for(i=0;i<n;i++)
	{
		scanf("%d",&dd);
		sum+=dd;
	}
	sum=sum/n;
	return sum;
}









/*考生在以上空白处定义函数*/

