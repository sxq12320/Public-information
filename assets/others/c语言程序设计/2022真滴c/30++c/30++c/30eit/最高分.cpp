#include<stdio.h>
int max(int x,int y)
{
	int ret;
	if(y>x){
		ret=y;
	}else{
		ret=x;
	}
	return ret;
}




int main()
{
	int a,b,c,d,e,B;
	printf("Peter的5门课分数分别是：\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	

	
    B=max(a,b);
    B=max(B,c);
    B=max(B,d);
    B=max(B,e);
    printf("最高分是：%d",B);
	return 0;
    
}
