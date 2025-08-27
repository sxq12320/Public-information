 #include <stdio.h>
 int main()
{  FILE *fp; double y=2,f1=1,f2=2,f; int i;
   /****考生在以下空白处写入执行语句 ******/
	int n;
    double sum = 0;
    n=40;
    while(n--)
    {
        sum += f2 / f1;
        t = f2;
        f2 = f2 + f1;
        f1 = i;
    }
	y=sum;


   /****考生在以上空白处写入执行语句 ******/
   printf("%f\n",y);
   fp=fopen("CD1.dat","wb");
   fwrite(&y,8,1,fp);
   fclose(fp);
}