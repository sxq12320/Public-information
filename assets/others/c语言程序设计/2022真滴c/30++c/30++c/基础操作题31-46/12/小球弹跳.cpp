
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,data; 
	double h0, t=0;
	printf("初始高度为：");
	scanf("%lf",&h0);
	t=h0;
	i=1;
		do{
			
			if(i==1){t=20;}
			else{
			t=t/2;
			h0+=t*2;}
			printf("第%d次高度%g\n",i,t);
			
			printf("第%d次距离%g\n",i,h0);
			i++;
		}while(i<=10);
	
		
    
	
	return 0;
}
