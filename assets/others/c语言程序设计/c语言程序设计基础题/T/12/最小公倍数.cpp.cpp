#include<stdio.h>
#include<iostream>
using	namespace std; 
int main()
{
	int a,b,i;
	cout<<"请输入两个自然数：";
	cin>>a>>b;
	for(i=1;;i++)
	{
		if(i%a==0&&i%b==0)
		break;	
	} 
	cout<<"最小公倍数："<<i; 
	return 0; 
} 
