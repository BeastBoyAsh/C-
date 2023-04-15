#include<iostream>
using namespace std;
main()
{
	int a,b,n,m=1;
	cout<<"Enter The Number- ";
	cin>>n;
	
	while(n!=0)
 {
 
	{
		b=n%10; 
	    cout<<"\nDigits=  "<<b<<"\n";
		n=n/10;
    }
	 
	while(b>1)
	{
		{
		}m=m*b;
     	b=b-1;

    } 
	cout<<"\nFactorial= "<<m<<"\n";
 }

}