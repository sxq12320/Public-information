#include <stdio.h>
#include <math.h>
int main()
{  FILE *fp; double c; int i,j;
   double a[3][3]={{1.3,2.7,3.6},{2,3,4.7},{3,4,1.27}};
   /****考生在以下空白处写入执行语句******/

   for(i=0;i<3;i++){c=a[i][i];
   	for(j=0;j<3;j++)a[i][j]/=c;
	   	
	   
   }

   
   /****考生在以上空白处写入执行语句******/
   for(i=0;i<3;i++) {
	 for(j=0;j<3;j++) printf("%7.3f ",a[i][j]);
	 putchar('\n');
   }
   fp=fopen("CD2.dat","wb");
   fwrite(*a+8,8,1,fp);
   fclose(fp);
}
