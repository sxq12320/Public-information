
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,data; 
	float s=0;
	
		for(i=1;;i++)
		{
			s+=2.5;if(s>=100)break;
			if(i%5==0 ) s-=6;
			
		}
	
	 	
    printf("����%d�죬�Ŵ湻100Ԫ",i);
	
	return 0;
}
