#include<iostream>
using namespace std;
int main(){
	int times=0;
	bool yes;
	do{
		yes=true;
		times=times+7;
		if(times%2!=1) yes=false;
		if(times%3!=1) yes=false;
		if(times%4!=1) yes=false;
		if(times%5!=1) yes=false;
		if(times%6!=1) yes=false;
	}while(yes==false);
	cout<<"体操队人数至少"<<times;
	return 0;
}
