#include <stdio.h>
void frep(char str[],char s);
int main(void)
{
    char str[80],s;
    gets(str);
    s=getchar();
    frep(str,s);
    puts(str);
    return 0;
}
/*考生在以下空白处定义函数*/
void frep(char str[],char s)
{
	int i=0;
	char c;
	while((c=str[i])!='\0')
	{
		if(!(c<='9'&&c>='0')){str[i]=s;}
		i++;
		}
	
}









/*考生在以上空白处定义函数*/

