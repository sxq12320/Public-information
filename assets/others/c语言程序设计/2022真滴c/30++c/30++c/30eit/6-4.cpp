 #include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
   int a,b;
   scanf("%d %d %c",&a,&b,&op);
   switch(op)
   {
       case '+':printf("%d",a+b);break;
       case '-':printf("%d",a-b);break;
       case '*':printf("%d",a*b);break;
       case '/':{
       if(b==0)
        printf("Divided by zero");
       else
        printf("%d",a/b);
       }break;
       default:printf("invalid operator"); break;
   }

    return 0;
}
