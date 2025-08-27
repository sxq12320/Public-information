#include <stdio.h>
int fmax(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    int max;
    max=fmax(n);
    printf("%d",max);
    return 0;
}
/*考生在以下空白处定义函数*/
int fmax(int n)
{
	int i,data,max_d;
	for(i=0;i<n;i++)
	   {scanf("%d",&data);
	   if(i==0)max_d=data;
	   else if(data>max_d)max_d=data;
		} 
		return max_d;
}









/*考生在以上空白处定义函数*/

