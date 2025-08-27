#include <stdio.h>
int main()
{  FILE *fp; 
   double a[10]={1.7,2.3,1.2,4.5,-2.1,-3.2,5.6,8.2,0.5,3.3};
   double v,s; int i;
   /****考生在以下空白处写入执行语句******/
  v=0;s=0;
	for( i=0;i<=9;i++){
		v+=a[i];
	
		}
   		v=v/10;
	for( i=0;i<=9;i++){
		if(a[i]>=v) s+=a[i];
	}
   
   
   
   /****考生在以上空白处写入执行语句******/
   printf("%f  %f\n",v,s);
   fp=fopen("CD1.dat","wb");
   fwrite(&s,8,1,fp);
   fclose(fp);
}
