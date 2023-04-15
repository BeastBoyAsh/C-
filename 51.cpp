#include<iostream>
using namespace std;
main()
{
	int i,a,b,c=0;
	cout<<"Enter Number A :- ";
	cin>>a;
	cout<<"Enter Number B :- ";
	cin>>b;
    cout<<"\nSUM OF NUMBERS ARE : \n";
	for(i=a;i<=b;i=i+1)
	{
	   c=c+i;
	}
	cout<<"\nSum Is : "<<c;
	  	
}