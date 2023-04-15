#include<iostream>
using namespace std;
main()
{
	int a,b,n;
	cout<<"Enter The Number- ";
	cin>>n;
	
	while(n!=0)
	{
		b=n%10;
		cout<<b<<"\n";
		n=n/10;
	}
	
	
	
	
}