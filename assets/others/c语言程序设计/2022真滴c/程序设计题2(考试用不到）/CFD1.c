#include <stdio.h>
int fnum(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    int dg;
    dg=fnum(n);
    printf("%d",dg);
    return 0;
}
/*���������¿հ״����庯��*/
int fnum(int n)
{
	int bit=1;
	while((n/=10)>0)bit++;
	return bit;
 } 









/*���������Ͽհ״����庯��*/

