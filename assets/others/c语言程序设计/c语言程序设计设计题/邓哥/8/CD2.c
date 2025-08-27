 #include <stdio.h>
 #include <math.h>
 int main()
{  FILE *fp; double y,t=1;int i=1;
   /****考生在以下空白处写入执行语句******/

	y=1;
	for (i=3; fabs(t)>=1e-10; i+=2)
	{
		t=-t/((i-1)*i);
		y+=t;
	}
 
 
 
  
   /****考生在以上空白处写入执行语句******/
   printf("%f\n",y);
   fp=fopen("CD1.dat","wb");
   fwrite(&y,8,1,fp);
   fclose(fp);
 }