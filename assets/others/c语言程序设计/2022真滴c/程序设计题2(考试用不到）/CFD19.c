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
/*���������¿հ״����庯��*/
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









/*���������Ͽհ״����庯��*/

