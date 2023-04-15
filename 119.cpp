#include<iostream>
using namespace std;
main()
{
	int a,b,n,m=0;
	cout<<"Enter The Number- ";
	cin>>n;
	
	
	a=n%10; 
	cout<<"Last=  "<<a ;	
	
	while(n!=0)
     
  	{
		b=n%10; 
	    n=n/10;
    }
cout<<"\nFirst=  "<<b;	

	m=a+b;
	cout<<"\nSum of First And Last Digit is= "<<m;
	
	     
    
}