 #include <stdio.h>
 #include <math.h>
 /****���������¿հ״�д��ִ����� ��д����f�ж����β���Ӧ��ʵ���Ƿ�����****/
 int prime(int n)
 {
 	int i,k;
 	k=sqrt(n);
 	for(i=2;i<=k;i++)
 		{
		  if(n%i==0) return(0);	//���������������� 
		 }
	return(1);//���ܳ����������� 
 }




 /*****���������Ͽհ״���д����f *************/
 #include <math.h>
 int main()
{  FILE *fp; int i; long s=0,k=0;
   /****���������¿հ״�д��ִ�����******/
	for(i=500;i<=800;i++)
 	{
	 	if(prime(i)){k++;s+=i;}
	 }
 
   /****���������Ͽհ״�д��ִ�����******/
   printf("��������%d   �����ܺ�%d\n",k,s);
   fp=fopen("CD2.dat","wb");
   fwrite(&k,4,1,fp);fwrite(&s,4,1,fp);
   fclose(fp);
}
