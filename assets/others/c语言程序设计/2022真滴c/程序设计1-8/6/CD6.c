 #include <stdio.h>
 #include <math.h>
 #define f(x,y) (x-1)*(x-1)+(y+0.5)*(y+0.5)
 int main()
{  FILE *fp; long i,k=0;
   float x[10]={1.1,3.2,-2.5,5.67,3.42,-4.5,2.54,5.6,0.97,4.65};
   float y[10]={-6,4.3,4.5,3.67,2.42,2.54,5.6,-0.97,4.65,-3.33};
   /****考生在以下空白处写入执行语句 ******/
	for( i=0;i<=9;i++){
		if(((x[i]-1)*(x[i]-1)+(y[i]+0.5)*(y[i]+0.5))<=25)
		k++;
	}
   
   
   
   
   
   /****考生在以上空白处写入执行语句 ******/
   printf("%d\n",k);
   fp=fopen("CD1.dat","wb");
   fwrite(&k,4,1,fp);
   fclose(fp);
}
