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
	int i,data,max;
	for(i=0;i<n;i++){
		scanf("%d",&data);
		if(i==0){
			max=data;
		}else if(data>max){
			max=data;
		}
	}
	return max;
}







/*考生在以上空白处定义函数*/

