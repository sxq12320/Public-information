#include <stdio.h>
int fnum(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    int dg;
    dg=fnum(n);
    printf("%d",dg);
    return 0;
}
/*考生在以下空白处定义函数*/
int fnum(int n)
{
	int bit=1;
	while((n/=10)>0)bit++;
	return bit;
 } 









/*考生在以上空白处定义函数*/

