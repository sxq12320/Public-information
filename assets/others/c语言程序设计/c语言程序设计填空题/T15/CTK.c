 #include <stdio.h>
 #include <string.h>
 int main()
{  char s[81];int i;
   gets(s);
   for(i=0;i<strlen(s);)
	 if(s[i]=='c')
	   strcpy(s+i,s+i+1);
	  else
	   i++;
   puts(s);
 }
