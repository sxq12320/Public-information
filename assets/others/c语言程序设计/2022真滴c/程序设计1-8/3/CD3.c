 #include <stdio.h>
 int main()
{  FILE *fp; double y=2,f1=1,f2=2,f; int i;
   /****���������¿հ״�д��ִ����� ******/
   
for(i=1;i<40;i++)
{
	f=f1+f2;
	
	f1=f2;
	f2=f;
    y+=f2/f1;
} 



   /****���������Ͽհ״�д��ִ����� ******/
   printf("%f\n",y);
   fp=fopen("CD1.dat","wb");
   fwrite(&y,8,1,fp);
   fclose(fp);
}
