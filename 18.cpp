#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e,f;
	cout<<"Enter Your 4 Dingit Number:- " ;
	cin>>a;
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	a=a/10;
	e=a%10;
	
	
	f=b+c+d+e;
	
	cout<<"\nSum of digits is:- "<<f;
	
		if (f%2==0)
	{
	
cout<<"\nEVEN";
}
	
if(f%2!=0)
cout<<"\nODD";
	
	
	
	
	
	
}