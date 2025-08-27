#include <stdio.h>
int fmin(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    int m;
    m=fmin(n);
    printf("%d",m);
    return 0;
}
/*考生在以下空白处定义函数*/
int fmin(int n)
{
	int i,data,min_d;
	for(i=0;i<n;i++)
	{scanf("%d",&data);
	if(i==0)min_d=data;
	else if(data<min_d)min_d=data;
    }
	return min_d;
	
}









/*考生在以上空白处定义函数*/

