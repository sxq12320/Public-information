#include <stdio.h>
int Pnum(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",Pnum(n));
    return 0;
}
/*考生在以下空白处定义函数*/
int Pnum(int n)
{
	
	
	
	int i,j,y=0;
	for(i=1;i<=n/2;i++)
	if(n%i==0) y=y+i;
	if(y==n)return 1;
	else return 0;
}









/*考生在以上空白处定义函数*/

