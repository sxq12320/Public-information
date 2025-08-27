#include <stdio.h>
long f(long x,long y) {
  return 3*(x-5)*x+x*(y-6)+(y-7)*y;
}
int main()
{  FILE *fp; long min,x1,y1,x,y;
   /****考生在以下空白处写入执行语句******/
	min=f(0,0);
	for(x=0;x<=10;x++){
		for(y=0;y<=10;y++)
		{
			if(f(x,y)<min){min=f(x,y);x1=x;y1=y;}	
		}
	}






   /****考生在以上空白处写入执行语句******/
   printf("%d(%d,%d)\n",min,x1,y1);
   fp=fopen("CD2.dat","wb");
   fwrite(&min,4,1,fp);fwrite(&x1,4,1,fp);
   fwrite(&y1,4,1,fp);
   fclose(fp);
}
