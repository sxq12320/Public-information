#include <stdio.h>
int fcount(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    printf("%d",fcount(str));
    return 0;
}

/*考生在以下空白处定义函数*/
int fcount(char str[])
{
	int i;
	int k = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i]>='0' && str[i] <='9')
		    k++;
	 } 
	 return k;
}







/*考生在以上空白处定义函数*/

