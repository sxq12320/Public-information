#include <stdio.h>
int fhex(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    printf("%d",fhex(str));
    return 0;
}
/*���������¿հ״����庯��*/
int fhex(char str[])
{
	int i=0,num=0;
	char c;
	while((c=str[i])!='\0'){
		 if(c>='0'&&c<='9'||c>='A'&&c<='F'||c>='a'&&c<='f')
		 num++;
		 i++;
	}
	return num;
 } 









/*���������Ͽհ״����庯��*/

