#include<iostream>
using namespace std;
main()
{
	int a,b,n,r=0;
	cout<<"Enter The Number- ";
	cin>>n;
	
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		r=r*10+b;
	}
	cout<<"\nReverse= "<<r;
}