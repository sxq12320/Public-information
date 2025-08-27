#include <stdio.h>
#define F (t<=n && t*2>=n)
int main()
{ int m,t,n;
  while(scanf("%d",&n), n>0){
    m=0;t=1;
    while(!F){
       t=t*2;m++;
	}
    printf("%d  %d\n",n,m);
  }
}
