#include <stdio.h>
int main()
{  int m,n,k;
   while(1) {
	 scanf("%d%d",&m,&n);
	 if(m>0 && n>0) break;
   }
   k=m;
   while( m%k!=0 || n%k!=0) k--;
   printf("%d\n",k);
}
