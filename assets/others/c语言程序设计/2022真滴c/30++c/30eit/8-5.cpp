#include<stdio.h>
int main()
{
	int i,j;
	j=100;
	for(i=1;i<=j;i++){
		if(i%5==0){
			if(i%3==0){
				printf("%d\n",i);
			}
		}
	}
	
	return 0; 
}
