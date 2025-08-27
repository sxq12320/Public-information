#include <stdio.h>
void ftog(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    ftog(str);
    puts(str);
    return 0;
}
/*考生在以下空白处定义函数*/
void ftog(char str[])
{
	char ch;
	int i;
	for(i=0;(ch=str[i])!='\0';i++)
	{
		if(ch>='A'&&ch<='Z')str[i]=ch+32;
		if(ch>='a'&&ch<='z')str[i]=ch-32;
		
	 } 
}









/*考生在以上空白处定义函数*/

