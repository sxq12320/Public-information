#include <stdio.h>
int fnar(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",fnar(n));
    return 0;
}
/*���������¿հ״����庯��*/
int fnar(int n)
{
	int a, b, c, i;
	for (i = n; i <= 999; i++)
	{
	    a = i % 10;
	    b = i/10%10;
	    c = i/100;
	    if (a*a*a + b*b*b + c*c*c == i)
	       return i;
	} 
}







/*���������Ͽհ״����庯��*/

