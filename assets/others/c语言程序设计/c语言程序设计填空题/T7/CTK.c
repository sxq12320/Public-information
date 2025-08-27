#include <stdio.h>
#include <math.h>
#define f(x) x*x-5.5*x+sin(x)
int main()
{  float x,max;
   max=f(0.0);  
   for(x=0.5;x<=10;x+=0.5)
     if(f(x)>max) max=f(x);
   printf("%f\n",max);
}
