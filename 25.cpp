#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e,f;
    cout<<"Enter The 5 Digit Number:- ";
	cin>>a;
	
		b=a%10;
		a=a/10;
		c=a%10;
		a=a/10;
		d=a%10;
	    a=a/10;
	    e=a%10;
	    a=a/10;
	    f=a%10;
	    
	cout<<"\nFirst Number= "<<b;
	cout<<"\nSecond Number= "<<c;
	cout<<"\nThird Number= "<<d;
	cout<<"\nFourth Number= "<<e;
	cout<<"\nFfth Number= "<<f;
	
	   
	
	
}