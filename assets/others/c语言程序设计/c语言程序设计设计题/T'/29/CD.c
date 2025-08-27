#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{  FILE *fp; long i,n,*a;
   char s[]="ABCabc$%^,.+-*/";
   n=strlen(s);
   a=(long*)malloc(n*sizeof(long));
   /****考生在以下空白处写入执行语句******/
	for(i=0;i<n;i++)
	{
		a[i]=s[i]*(i+1);	
	
   		
   
   
   
   
   /****考生在以上空白处写入执行语句******/
   printf("%d",a[i]);
    printf("\n");}
   fp=fopen("CD2.dat","wb");
   fwrite(a,4,n,fp);
   fclose(fp);
}
