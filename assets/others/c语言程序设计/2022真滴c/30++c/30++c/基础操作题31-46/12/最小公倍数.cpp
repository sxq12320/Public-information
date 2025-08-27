#include<stdio.h>
int main()
{
	int m,n,t,i;
	printf("请输入两个自然数：");
	scanf("%d %d",&m,&n);
	if(m<n){
		t=m;
		m=n;
		n=t;
	}
	for(i=m;i>0;i++){
		if(i%m==0&&i%n==0){
			printf("最小公倍数：%d",i);
			break;
		}
	}
	return 0;
	
}
