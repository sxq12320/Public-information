 #include <stdio.h>
 #include <math.h>
 /****考生在以下空白处写入执行语句 编写函数f判断与形参相应的实参是否素数****/
 int prime(int n)
 {
 	int i,k;
 	k=sqrt(n);
 	for(i=2;i<=k;i++)
 		{
		  if(n%i==0) return(0);	//能整除，不是素数 
		 }
	return(1);//不能除尽，是素数 
 }




 /*****考生在以上空白处编写函数f *************/
 #include <math.h>
 int main()
{  FILE *fp; int i; long s=0,k=0;
   /****考生在以下空白处写入执行语句******/
	for(i=500;i<=800;i++)
 	{
	 	if(prime(i)){k++;s+=i;}
	 }
 
   /****考生在以上空白处写入执行语句******/
   printf("素数个数%d   素数总和%d\n",k,s);
   fp=fopen("CD2.dat","wb");
   fwrite(&k,4,1,fp);fwrite(&s,4,1,fp);
   fclose(fp);
}
