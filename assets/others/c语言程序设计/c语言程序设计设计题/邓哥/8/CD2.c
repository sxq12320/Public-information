 #include <stdio.h>
 #include <math.h>
 int main()
{  FILE *fp; double y,t=1;int i=1;
   /****���������¿հ״�д��ִ�����******/

	y=1;
	for (i=3; fabs(t)>=1e-10; i+=2)
	{
		t=-t/((i-1)*i);
		y+=t;
	}
 
 
 
  
   /****���������Ͽհ״�д��ִ�����******/
   printf("%f\n",y);
   fp=fopen("CD1.dat","wb");
   fwrite(&y,8,1,fp);
   fclose(fp);
 }