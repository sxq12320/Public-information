#include <stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
ch=ch-1,ch=ch+1;
printf("%c",ch-1);
printf("%c",ch);
printf("%c",ch+1);
return 0;
}
