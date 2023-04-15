#include<iostream>
using namespace std;
main()
{
	int a,b,n,m;
	cout<<"Enter Number=  ";
	cin>>n;
	
	while(n!=0)
	 {
	 	b=n%10;
	 	a=b*b*b;
	 	n=n/10;
	 }
	if (a==b)
	cout<<" Armstrong Number";
	
	else
	cout<<" Not Armstrong Number";
	
}