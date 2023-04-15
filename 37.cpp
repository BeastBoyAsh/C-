#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"\nFirst Side :- ";
	cin>>a;
	cout<<"\nSecond Side :- ";
	cin>>b;
	cout<<"\nThird Side :- ";
	cin>>c;
	
if(a==b && b==c && c==a)
	{cout<<"\nEquilateral Triangle";
	}
	else
if(a==b||b==c||c==a)
    {cout<<"\nIsosceles Triangle";
	}	
	else
	cout<<"\nScalene Triangle";
	
	
	
	
	
}