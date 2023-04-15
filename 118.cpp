#include<iostream>
using namespace std;
main()
{
	int a,b,n,m=0;
	cout<<"Enter The Number- ";
	cin>>n;
	
	while(n!=0)
	{
		b=n%10; 
	    n=n/10;
    }
cout<<"First Digit=  "<<b;	
}

