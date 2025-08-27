#include <stdio.h>
#include <math.h> 
int main()
{ double a[10],v=0,x,d; int i;
  printf("Input 10 numbers:  ");
  for(i=0;i<10;i++) {
	scanf("%lf", &a[i]);
	v=v+a[i]/10;
  }
  d=fabs(a[0]-v); x=a[0];
  for(i=1;i<10;i++)
	if(fabs(a[i]-v)<d) d=fabs(a[i]-v),x=a[i];
  printf("%.4f   %.4f\n",v,x);
}
