#include<stdio.h>
int main()
{
	int a, b,c,x;
	int l,m,n;
	scanf("%d %d %d",&a,&b,&c);
	int i=1,p;
	p=a;
    if(p>b){
    	p=b;
	}
	if(p>c){
		p=c;
	}
	for(;p>2;p--){
		l=a%p;
		m=b%p;
		n=c%p;
		if(l==m&&m==n){
			x=p;
		}
		
		
	}printf("%d",x);
	return 0;
}


 
