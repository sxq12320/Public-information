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
/*���������¿հ״����庯��*/
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









/*���������Ͽհ״����庯��*/

