#include <iostream>
using namespace std;
int CommFactor2(int m, int n); //����������
int main()
{
  int a, b;
  cin >> a >> b;
  cout << "�������������Լ��Ϊ��" << CommFactor2(a,b)<< endl;
  return 0;
}
int CommFactor2(int m,int n)
{
  int i;
  int factor = 1;
  for (i=2;i<=m&&i<<n;i++)
  {
    while(m % i == 0 && n % i == 0)  //���ﲻ����if��䣬��Ϊ���ܻ����ظ��Ĺ�����
    {
      factor = factor * i;
      m = m / i;
      n = n / i;
    }
  }
  return factor;
}