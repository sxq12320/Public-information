#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	double x,y;
	double z;
	cin>>x>>y;
	z=(87*x+85*y)/(x+y);
	cout<<fixed<<setprecision(2)<<z<<endl;
	return 0;
}
