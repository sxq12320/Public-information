#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,max;
   max=-2147483648;
   scanf("%d%d%d",&a,&b,&c);
   if(a>max)
    max=a;
   if(b>max)
    max=b;
   if(c>max)
    max=c;
   printf("%d",max);
    return 0;
}
