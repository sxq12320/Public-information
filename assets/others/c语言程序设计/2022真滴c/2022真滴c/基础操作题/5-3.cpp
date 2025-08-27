#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	int max;
	cin >> a >> b >> c;
	max = a;
	if (b>max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	cout << max << endl;
	return 0;
}