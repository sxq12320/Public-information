#include <stdio.h>
#include <stdlib.h>

int main()
{
   double t,s,b;
    printf("��ߣ�m����");
   scanf("%lf",&s);
   printf("���أ�kg����");
  scanf("%lf",&t);
   b=t/(s*s);
   if(b<18.5)
    printf("ƫ��");
   else if(b<24)
    printf("����");
   else if(b<28)
    printf("ƫ��");
   else if(b<40)
   printf("����");
   else
    printf("�ضȷ���");

    return 0;
}
