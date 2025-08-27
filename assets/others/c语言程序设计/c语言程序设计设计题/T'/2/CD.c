 #include <stdio.h>
 #include <math.h>
 int main()
{  FILE *fp; int i;
   double x[10]={1.1,3.2,-2.5,5.67,3.42,-4.5,2.54,5.6,0.97,4.65};
   double y[10]={-6,4.3,4.5,3.67,2.42,2.54,5.6,-0.97,4.65,-3.33};
   /****考生在以下空白处写入执行语句 ******/
    double s=0;
    for(i=0;i<10;i++)
    {
		s+=sqrt((x[i]-1.0)*(x[i]-1.0)+(y[i]-1.0)*(y[i]-1.0) );
	}
   
   
   
   /****考生在以上空白处写入执行语句 ******/
   printf("%f\n",s);
   fp=fopen("CD1.dat","wb");
   fwrite(&s,8,1,fp);
   fclose(fp);
}
