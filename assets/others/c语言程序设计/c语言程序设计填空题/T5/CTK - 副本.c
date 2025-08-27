#include <stdio.h>
int main()
{  int a[6]={2,5,7,8,4,12},b[7]={3,4,5,6,7,8,9},i,j,k;
   for(i=0;i<6;i++) {
	 for(j=0;j<7;j++) if(___1____) break;
	 if(___2___) printf("%d  ",a[i]);
   }
   putchar('\n');
   for(i=0;i<7;i++) {
	 for(j=0;j<6;j++) if(b[i]==a[j]) ___3___;
	 if(j==6) printf("%d  ",___4___); }
   putchar('\n');
}