#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	cout << a<<" " << b << endl;
	return 0;
}