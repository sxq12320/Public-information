#include <stdio.h>
#include <stdlib.h>

int main()
{
   double t,s,b;
    printf("身高（m）：");
   scanf("%lf",&s);
   printf("体重（kg）：");
  scanf("%lf",&t);
   b=t/(s*s);
   if(b<18.5)
    printf("偏瘦");
   else if(b<24)
    printf("正常");
   else if(b<28)
    printf("偏胖");
   else if(b<40)
   printf("肥胖");
   else
    printf("重度肥胖");

    return 0;
}
