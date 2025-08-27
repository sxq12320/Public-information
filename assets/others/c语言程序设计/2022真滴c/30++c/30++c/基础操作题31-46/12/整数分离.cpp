#include<stdio.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int x;
	int a[999];
	int i = 1;
	int j;
	cin >> x;
	while (x > 0)
	{
		a[i] = x % 10;
		i = i + 1;
		x = x / 10;
	}
	for (j = 1; j<i; j++)
	{
		cout << a[j] << " ";
	}
	return 0;
}
