 #include <stdio.h>
 #include <math.h>
 int main()
{  FILE *fp; int i;
   /****考生在以下空白处写入语句 ******/
   double y=0;
   for(i=2;i<=10;i++)
   {
   	y+=sqrt(i*1.0);
   }

 
   /****考生在以上空白处写入语句 ******/
   printf("%.10f\n",y);
   fp=fopen("CD1.dat","wb");
   fwrite(&y,8,1,fp);
   fclose(fp);
}
