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
/*���������¿հ״����庯��*/


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







/*���������Ͽհ״����庯��*/

