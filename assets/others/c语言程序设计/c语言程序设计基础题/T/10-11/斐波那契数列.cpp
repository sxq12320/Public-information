
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,n,l1=1,l2=1,l;
	scanf("%d",&n);
	if(n==1)printf("%5d",l1);
	else{printf("%5d",l1);printf("%5d",l2);
	  for(i=3;i<=n;i++)
	        { 
		      l=l1+l2;
		      l1=l2;l2=l;
	     	  printf("%5d",l);
	        }
	  }
	
	
	return 0;
}
