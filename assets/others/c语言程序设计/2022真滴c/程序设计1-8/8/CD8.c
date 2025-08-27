 #include <stdio.h>
 #include <math.h>
 int main()
{  FILE *fp; double sum,x; int i;
   /****考生在以下空白处写入执行语句******/
   x=81;
   for(i=1;i<=30;i++)
   {
   	sum=sum+x;
   	x=sqrt(x);
   }
 
 
 
 
 
 
   /****考生在以上空白处写入执行语句******/
   printf("%f\n",sum);
   fp=fopen("CD1.dat","wb");
   fwrite(&sum,8,1,fp);
   fclose(fp);
 }
