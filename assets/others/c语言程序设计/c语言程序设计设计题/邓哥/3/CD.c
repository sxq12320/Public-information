 #include <stdio.h>
 int main()
{  FILE *fp; double y=2,f1=1,f2=2,f; int i;
   /****���������¿հ״�д��ִ����� ******/
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


   /****���������Ͽհ״�д��ִ����� ******/
   printf("%f\n",y);
   fp=fopen("CD1.dat","wb");
   fwrite(&y,8,1,fp);
   fclose(fp);
}