#include<iostream>
using namespace std;
main()
{
	int *p;
	cout<<"Enter number ";
	p=new int;
	cin>>*p;
	cout<<"\nThe number is = "<<*p;
	delete p; 
}