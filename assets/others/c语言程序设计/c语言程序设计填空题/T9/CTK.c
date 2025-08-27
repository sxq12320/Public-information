 #include <stdio.h>
 long f(int);
 int main()
{  
  printf("%ld\n",f(24)); 
 }
 long f(int n)
{  if( n==1 || n==2)
     return 1;
   else
     return f(n-1)+f(n-2);
}
