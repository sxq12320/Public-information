#include <stdio.h>
int main()
{  int n,m,k;
   while(scanf("%d",&n)!=0) {
	 m=n; k=0;
     while(m!=0){
       k++; m=m/10;
	 }
     printf("%d��%dλ����\n",n,k);
   }
}
