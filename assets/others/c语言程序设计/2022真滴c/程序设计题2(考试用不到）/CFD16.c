#include <stdio.h>
#include<string.h>
int fpal(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    printf("%d",fpal(str));
    return 0;
}

/*���������¿հ״����庯��*/
int fpal(char str[])
{
    int len,i;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
    	if(str[i]!=str[len-1-i])return 0;
	}
	return 1;
	 
}









/*���������Ͽհ״����庯��*/

