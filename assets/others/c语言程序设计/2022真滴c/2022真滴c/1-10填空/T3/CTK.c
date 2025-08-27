#include <stdio.h>
#include <ctype.h >
int main()
{  char s[81]; int i;
   gets(s);
   for(i=0;s[i]!='\0';i++) {
	 if(isupper(s[i]))
	   s[i]=s[i]+32;
	 else
       if(islower(s[i]))
	     s[i]=s[i]-32;
	 if(s[i]==' ') s[i]='_';
   }
   puts(s);
}
