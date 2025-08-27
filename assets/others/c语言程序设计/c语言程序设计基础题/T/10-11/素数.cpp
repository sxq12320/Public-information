
#include<stdio.h>
//#include<string.h>
#include<math.h>
int main()
{
	int n,i;
	//int k; 
	//printf("n=?"); 
	scanf("%d",&n);
	//k=sqrt(n);
	for (i=2;i<=n-1;i++)
		if(n%i==0) break;
	if(i<=n-1) printf("不是素数");
	else printf("是素数");
	
	
	return 0;
}
