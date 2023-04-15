#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter The Number:- ";
	cin>>a;

if(a%3==0 && a%5==0)
	
	{
		cout<<"\n Divisible by 3 & 5";	
	}
	
if(a%3!=0 && a%5!=0)
	{
		cout<<"\nNot Divisible by 3 & 5";
	
	}	
	
if(a%3==0 && a%5!=0)
	{
		cout<<"\nDivisible by 3 ";	
	}
	
if(a%3!=0 && a%5==0)
	{
		cout<<"\nDivisible by 5 ";			
	}
}