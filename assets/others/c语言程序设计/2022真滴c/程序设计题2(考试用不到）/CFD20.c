#include <stdio.h>
double fave(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    double a;
    a=fave(n);
    printf("%.2f",a);
    return 0;
}
/*���������¿հ״����庯��*/
double fave(int n)
{
	int i,dd;
	double sum=0.0;;
	for(i=0;i<n;i++)
	{
		scanf("%d",&dd);
		sum+=dd;
	}
	sum=sum/n;
	return sum;
}









/*���������Ͽհ״����庯��*/

