 #include <stdio.h>
 #include <math.h>
 int main()
{  FILE *fp; double sum,x; int i;
   /****���������¿հ״�д��ִ�����******/
   x=81;
   for(i=1;i<=30;i++)
   {
   	sum=sum+x;
   	x=sqrt(x);
   }
 
 
 
 
 
 
   /****���������Ͽհ״�д��ִ�����******/
   printf("%f\n",sum);
   fp=fopen("CD1.dat","wb");
   fwrite(&sum,8,1,fp);
   fclose(fp);
 }
