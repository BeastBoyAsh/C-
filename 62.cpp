#include<iostream>
using namespace std;
main()
{
	int i,a,b=0;
	cout<<"Enter Number A : ";
	cin>>a;
	
	for(i=1;i<a;i=i+1)
	
	{ if(a%i==0)
    b=b+i;
    }
cout<<"Sum Of Divisors : "<<b;
}