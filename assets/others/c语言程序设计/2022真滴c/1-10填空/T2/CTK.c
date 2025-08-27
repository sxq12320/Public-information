#include <stdio.h>
void Dec2Bin(long m,char *s)
{  int i,k;
   for(i=0;i<32;i++) {
     k=m & 0x80000000;
     if(k!=0) s[i]='1'; else s[i]='0';
	 m<<=1;  /* m ×óÒÆ1Î» */
   }
}
int main()
{  char a[33]=""; long n; int i;
   for(i=1;i<=4;i++) {
     scanf("%ld",&n);
     Dec2Bin(n,a);           
	 puts(a);          
   }
}
