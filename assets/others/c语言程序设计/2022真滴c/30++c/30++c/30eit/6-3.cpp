#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   scanf("%d",&a);
   if(a>=90)
    printf("A");
   else if(a>=70)
    printf("B");
   else if(a>=60)
    printf("C");
   else
    printf("D");

    return 0;
}
