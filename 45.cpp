#include<iostream>
using namespace std;
main()
{
	int i,a,b;
	cout<<"Enter Number A :- ";
	cin>>a;
	cout<<"Enter Number B :- ";
	cin>>b;
    cout<<"\nEVEN NUMBERS ARE : \n";
	for(i=a;i<=b;i=i+1)
	{
	  if(i%2==0)
	            {cout<<i<<"\n";
             	}
    }
		
}