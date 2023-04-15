#include<iostream>
using namespace std;
main()
{
	int i,a,b,c,d;
	cout<<"Enter Number A :- ";
	cin>>a;
	cout<<"Enter Number B :- ";
	cin>>b;
	
	for(i=a;i<=b;i=i+1)
	{ 
	    if(i%3==0)
	       {cout<<"\nDivisible By 3 : "<<i << "\n";
		   }
	    else
		if(i%5==0)
		   {cout<<"\nDivisible By 5 : "<<i <<"\n";
	       }	
    }  
		
 }