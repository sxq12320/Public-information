#include <stdio.h>
void swap(_____1_____) /*交换两个数的位置*/
{  int temp;
   temp=*pa;*pa=*pb;*pb=temp;
}
int main()
{  int a,b,c,temp;
   scanf("%d%d%d",&a,&b,&c);
   if(____2_____) swap(&a,&b);
   if(b>c) swap(____3_____);
   if(_____4____) swap(&a,&b);
   printf("%d,%d,%d\n",a,b,c);
}