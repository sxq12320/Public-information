#include<stdio.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int num1, num2;
	int change;
	double r;
	cout << "请输入两个正整数：";
	cin >> num1 >> num2;
	if (num1 < num2)
	{
		change = num1;
		num1 = num2;
		num2 = change;
	}
	do{
		r = num1 % num2;
		num1 = num2;
		num2 = r;
	  } while (r != 0);
	cout << "最大公约数：" << num1 << endl;
	return 0;
}
