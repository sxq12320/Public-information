
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,d0,d1,d2,t;
	
	for(i=100;i<1000;i++)
	{
	 	d0=i%10; t=i/10;
		d1=t%10; d2=t/10;	
	 	if(i==d0*d0*d0+d1*d1*d1+d2*d2*d2)printf("%d\n",i);
	  
	}
	
	
	 return 0;
}
