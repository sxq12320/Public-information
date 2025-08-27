#include <stdio.h>
int fnar(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",fnar(n));
    return 0;
}
/*考生在以下空白处定义函数*/
int fnar(int n)
{
	int d0,d1,d2,t,i;
	for(i=n;i<1000;i++)
	{
		d2=i%10;t=i/10;
		d1=t%10;t=t/10;
		d0=t;
		if(i==d2*d2*d2+d1*d1*d1+d0*d0*d0)return i;
		
	}
	    return 0;w
 } 









/*考生在以上空白处定义函数*/

