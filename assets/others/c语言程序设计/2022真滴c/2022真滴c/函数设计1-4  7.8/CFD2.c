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
	int i;
	char a;
	for (i = 0; i < strlen(str) / 2; i++)
	{
		a = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = a;
	}
}







/*���������Ͽհ״����庯��*/

