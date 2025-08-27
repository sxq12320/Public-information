#include <iostream>
using namespace std;
int CommFactor2(int m, int n); //函数的声明
int main()
{
  int a, b;
  cin >> a >> b;
  cout << "这两个数的最大公约数为：" << CommFactor2(a,b)<< endl;
  return 0;
}
int CommFactor2(int m,int n)
{
  int i;
  int factor = 1;
  for (i=2;i<=m&&i<<n;i++)
  {
    while(m % i == 0 && n % i == 0)  //这里不能用if语句，因为可能会有重复的公因子
    {
      factor = factor * i;
      m = m / i;
      n = n / i;
    }
  }
  return factor;
}