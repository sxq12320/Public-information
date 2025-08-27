 #include <stdio.h>
 #include <math.h>
 /****考生在以下空白处声明函数f ******/
 double f(double x)
	{
		return(x-10*cos(x)-5*sin(x));
	}



 /****考生在以上空白处声明函数f ******/
 int main()
{  FILE *fp; double x,max;
   /****考生在以下空白处写入执行语句******/
  x=1.0;max=f(x);
  	for(x=1.5;x<=10.0;x+=0.5){
	  	if(f(x)>max){max=f(x);}
	  }
 
 
   
   /****考生在以上空白处写入执行语句******/
   printf("%f\n",max);
   fp=fopen("CD2.dat","wb");
   fwrite(&max,8,1,fp);
   fclose(fp);
}
