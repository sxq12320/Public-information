#include <stdio.h>
int fnlet(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    printf("%d",fnlet(str));
    return 0;
}


/*���������¿հ״����庯��*/
int fnlet(char str[])
{
	int num=0,i=0;
	char c;
	while((c=str[i])!='\0'){
		if(!(c<='z'&&c>='a'||c<='Z'&&c>='A')){
			num++;
		}
		i++;
	}
	return num;
}



/*���������Ͽհ״����庯��*/

