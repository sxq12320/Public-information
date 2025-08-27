#include <stdio.h>
void swap(int *pa,int *pb) /*交换两个数的位置*/
{  int temp;
   temp=*pa;*pa=*pb;*pb=temp;
}
int main()
{  int a,b,c,temp;
   scanf("%d%d%d",&a,&b,&c);
   if(a>b) swap(&a,&b);
   if(b>c) swap(&b,&c);
   if(a>b) swap(&a,&b);
   printf("%d,%d,%d\n",a,b,c);
}
