#include <stdio.h>
int fnlet(char str[]);
int main(void)
{
    char str[80];
    gets(str);
    printf("%d",fnlet(str));
    return 0;
}


/*考生在以下空白处定义函数*/
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



/*考生在以上空白处定义函数*/

