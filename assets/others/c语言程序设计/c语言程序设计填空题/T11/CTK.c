#include <stdio.h>
#include <math.h>
long f(long n)
{  long m=fabs(n),y=0;
   while(m!=0) { 
     y=y*10+m%10; m/=10;
   }
   return n<0? -y: y;
}
int main()
{
    printf("%ld\t",f(12345));
	printf("%ld\n",f(-34567));
}
