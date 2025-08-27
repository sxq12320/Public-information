#include<stdio.h>
int main()
{
	int i,sum=0,j,k;
	i=1;
	j=2;
	while(i<=100){
		
		sum=sum+i*j;
		i++;
		j++;
		
	}
	printf("%d",sum);
	return 0;
}
