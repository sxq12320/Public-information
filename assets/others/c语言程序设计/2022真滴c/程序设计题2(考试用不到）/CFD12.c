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
/*���������¿հ״����庯��*/
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









/*���������Ͽհ״����庯��*/

