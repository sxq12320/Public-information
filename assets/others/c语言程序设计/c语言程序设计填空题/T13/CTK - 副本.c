#include <stdio.h>
#include <string.h>
#include <___1___>
void f(char *s)
{ ___ 2___;
  while(s[i]!='\0')
    if(isdigit(s[i])) ____3____(s+i,s+i+1);
    ___4___ i++;
}
int main()
{ char str[80]; 
  gets(str); f(str); puts(str);
}
