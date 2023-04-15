#include<iostream>
using namespace std;

void pallindrome(){
	int m,n,r=0,b;
	cout<<"Enter the number : ";
	cin>>n;
	m=n;
	while(n!=0)
	{
		b=n%10;
		r=r*10+b;
		n=n/10;
	}
	cout<<r;
	if(r==m)
    {
    	cout<<"\nIts a pallindrome number: ";
	}	
	else
	cout<<"\nNot a pallindrome number: ";
}
main()
{
	pallindrome();
}