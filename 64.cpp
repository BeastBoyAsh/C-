#include<iostream>
using namespace std;
main()
{
	int i,a,c=0;
	cout<<"Enter Number A : ";
	cin>>a;
	
	for(i=1;i<a;i=i+1)
    if(a%i==0)
        {c=c+1;}
	  
  cout<<"\nTotal: "<<c;
}

	    
	  