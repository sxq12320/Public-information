#include <iostream>
  
  using namespace std;
  
  int main(){
  
     int n,a,b;
     cin>>n;
     int i;
     for ( i = 1; i <= 10 ; ++i) {
         if ( i == 1){
            a = n % 10; //按照题干要求，首先输出最低位的数，即个位的数，over
        cout<<" "<<a;
     }
     n /= 10;  //更新n的值，假设一个数是233，233 / 10 = 23 n的值更新为 23 再 求模（%10） 为 3，输出。如此反复就okay了。
    b = n % 10; //照应上述。
     if ( b != 0){
         cout<<" "<<b;
     } else{
        break; //break 有跳出循环的作用，虽然循环条件是 i <= 10，但是不需要那么多，只求能把各个位的数输出完毕就行（可能你「那本书」没有讲）。
    }
     }
     return 0;
 }
