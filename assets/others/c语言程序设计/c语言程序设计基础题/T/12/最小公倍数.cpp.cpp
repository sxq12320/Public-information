#include<stdio.h>
#include<iostream>
using	namespace std; 
int main()
{
	int a,b,i;
	cout<<"������������Ȼ����";
	cin>>a>>b;
	for(i=1;;i++)
	{
		if(i%a==0&&i%b==0)
		break;	
	} 
	cout<<"��С��������"<<i; 
	return 0; 
} 
