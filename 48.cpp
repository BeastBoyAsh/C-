#include<iostream>
using namespace std;
main()
{
	int i,a,b,c;
	cout<<"Enter Number A :- ";
	cin>>a;
	cout<<"\nEnter Number B :- ";
	cin>>b;
	cout<<"\nLAST NUMBER DIVISIBLE BY 3 -\n";
	for(i=a;i<=b;i=i+1)
	{
	  c=i%10;
	   if(c==0)
	   {}
       else
	      if(c%3==0)
	            {cout<<i<<"\n";
             	}
	}
		
}