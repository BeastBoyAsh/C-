#include<iostream>
using namespace std;

void prime(){
	int i,n,c=1;
	cout<<"Enter the number : ";
	cin>>n;
	for(i=1;i<n;i++)
	if (n%i==0)
	{
	  {
	  	c=c+1;
	  }
    }
    if(c==2)
    {
    	cout<<"\nIts a prime number ";
	}
	else
	cout<<"\nIts not a prime number ";
}
main()
{
	prime();
}