#include <stdio.h>
int fcount(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    printf("%d",fcount(str));
    return 0;
}

/*���������¿հ״����庯��*/
int fcount(char str[])
{
	int num=0,i=0;
	char c;
	while((c=str[i])!='\0'){
	if(c<='z'&&c>='a'||c<='z'&&c>='A'||c<='9'&&c>='0')
	         num++;
	         i++;	
	}
	return num;
}









/*���������Ͽհ״����庯��*/

