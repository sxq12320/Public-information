#include <stdio.h>
#include <___1_____>
long f(long n)
{  long m=fabs(n),y=0;
   while(___2___) { 
     y=y*10+m%10; ____3_____;
   }
   return n<0? -y:___4____;
}
int main()
{
    printf("%ld\t",f(12345));
	printf("%ld\n",f(-34567));
}
