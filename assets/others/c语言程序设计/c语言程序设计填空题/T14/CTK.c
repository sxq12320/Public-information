#include <stdio.h>
float f(float*,float,int);
int main()
{  float b[5]={1.1,2.2,3.3,4.4,5.5};
   printf("%f\n",f(b,1.7,5));
}
float f( float *a,float x,int n )
{  float y=a[0],t=1; int i;
   for(i=1;i<n;i++) { t=t*x ; y=y+a[i]*t; }
    return y;
}
