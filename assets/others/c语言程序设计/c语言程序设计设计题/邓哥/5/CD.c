 #include <stdio.h>
 int main()
{  FILE *fp; long i,a[40]={1,1},s=2;
   /****考生在以下空白处写入执行语句 ******/

	for(i = 2;i < 40; i++)
	{
		a[i] = a[i-1] + a[i-2];//根据数列的定义，进行计算(N项的结果等于 (n-1)+(n-2))
		s+=a[i];
	}

   /****考生在以上空白处写入执行语句 ******/
   printf("%d\n",s);
   fp=fopen("CD1.dat","wb");
   fwrite(&s,4,1,fp);
   fclose(fp);
}