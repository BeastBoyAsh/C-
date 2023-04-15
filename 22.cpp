#include<iostream>
using namespace std;
main()
{
	int n,a;
	cout<<"Enter Unit:- ";
	cin>>n;
	
if(n<=100 && n>=1)
	{a=n*2;
    }
    
if(n<=200 && n>=101)
	{a=n*3;
    }
	
if(n<=300 && n>=201)
	{a=n*4;
    }
	
if(n>301)
    {a=n*5;
	}
	
	
	cout<<"\nTotal Cost:- "<<a;
	
}