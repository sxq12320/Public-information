
#include<stdio.h>
//#include<string.h>

int main()
{
	int i,data,sum=0;
	float ave;
	for(i=0;i<5;i++)
	{
		scanf("%d",&data);
		sum+=data;
	}
	ave=sum/5.0;
	printf("%0.1f",ave);
	
	 return 0;
}
