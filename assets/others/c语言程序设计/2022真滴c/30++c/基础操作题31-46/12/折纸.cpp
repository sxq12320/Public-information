
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,data; 
	float t=0.01;
	
	for(i=1;;i++)
		{
			t*=2;
			
			printf("%d %g\n",i,t);
			if(t>8848)break;
		}
	
	printf("����%d�Σ����Դﵽ���������ĸ߶�",i); 	
    
	
	return 0;
}
