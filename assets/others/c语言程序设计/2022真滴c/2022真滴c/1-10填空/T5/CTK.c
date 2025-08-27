#include <stdio.h>
int main()
{  int a[6]={2,5,7,8,4,12},b[7]={3,4,5,6,7,8,9},i,j,k;
   for(i=0;i<6;i++) {
	 for(j=0;j<7;j++) if(a[i]==b[j]) break;
	 if(j==7) printf("%d  ",a[i]);
   }
   putchar('\n');
   for(i=0;i<7;i++) {
	 for(j=0;j<6;j++) if(b[i]==a[j]) break;
	 if(j==6) printf("%d  ",b[i]); }
   putchar('\n');
}
