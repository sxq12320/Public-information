 #include <stdio.h>
 int main()
{  FILE *fp; long i,a[40]={1,1},s=2;
   /****���������¿հ״�д��ִ����� ******/

	for(i = 2;i < 40; i++)
	{
		a[i] = a[i-1] + a[i-2];//�������еĶ��壬���м���(N��Ľ������ (n-1)+(n-2))
		s+=a[i];
	}

   /****���������Ͽհ״�д��ִ����� ******/
   printf("%d\n",s);
   fp=fopen("CD1.dat","wb");
   fwrite(&s,4,1,fp);
   fclose(fp);
}