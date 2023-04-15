#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"nEnter First Number:- ";
	cin>>a;
	cout<<"\nEnter Second Number:- ";
	cin>>b;
	cout<<"\nEnter Third Number:- ";
	cin>>c;
	
	if(a>b && a>c)
	{
		cout<<"\nA is Largest";
	}
	if(b>a && b>c)
	{
		cout<<"\nB is Largest";
	}
	if(c>b && c>a)
	{
		cout<<"\nC is Largest";
	}
	
}