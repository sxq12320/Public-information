 #include <stdio.h>
 #include <math.h>
 /****���������¿հ״���������f ******/
 double f(double x)
	{
		return(x-10*cos(x)-5*sin(x));
	}



 /****���������Ͽհ״���������f ******/
 int main()
{  FILE *fp; double x,max;
   /****���������¿հ״�д��ִ�����******/
  x=1.0;max=f(x);
  	for(x=1.5;x<=10.0;x+=0.5){
	  	if(f(x)>max){max=f(x);}
	  }
 
 
   
   /****���������Ͽհ״�д��ִ�����******/
   printf("%f\n",max);
   fp=fopen("CD2.dat","wb");
   fwrite(&max,8,1,fp);
   fclose(fp);
}
