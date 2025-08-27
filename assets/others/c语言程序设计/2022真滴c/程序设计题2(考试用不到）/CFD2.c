#include <stdio.h>
#include<string.h>
void frev(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    frev(str);
    puts(str);
    return 0;
}
/*考生在以下空白处定义函数*/
void frev(char str[])
{
int l,i;
char c;
l=strlen(str);
for(i=0;i<l/2;i++)
{
	c=str[i];str[i]=str[l-i-1];
	str[l-i-1]=c; 
}


}









/*考生在以上空白处定义函数*/

