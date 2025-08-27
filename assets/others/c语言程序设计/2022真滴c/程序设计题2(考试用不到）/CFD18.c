#include <stdio.h>
int fcap(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    printf("%d",fcap(str));
    return 0;
}

/*考生在以下空白处定义函数*/
int fcap(char str[])
{
	char ch;
	int i,num=0;
	for(i=0;(ch=str[i])!='\0';i++)
	{
		 if(ch>='B'&&ch<='Z')
		   if(ch!='E'||ch!='I'||ch!='U')
		   num++;
	}
	return num;
}









/*考生在以上空白处定义函数*/

