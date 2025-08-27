
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,data,s=0; 
	float ave=0;
	
		for(i=0;;i++)
		{
			scanf("%d",&data);
			if(data==-1)break;
			s+=data;
		}
	if(i!=0)
	 	ave=1.0*s/i;
    printf("平均分是：%g",ave);
	
	return 0;
}
