#include<iostream>
using namespace std;
main()
{
	int a=0,b,n;
	cout<<"Enter The Number- ";
	cin>>n;
	
	while(n!=0)
	{
		b=n%10;
		n=n/10;
	
	
	a=a+b;

    }
	
	cout<<a;	
}