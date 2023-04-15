#include<iostream>
using namespace std;

void factorial(){
	int i,n,f=1;
	cout<<"Enter the number : ";
	cin>>n;
	for(i=n;i>=1;i--)
	  {
	  	f=f*i;
	  }
    cout<<"\nThe factorial is: ";
    cout<<f;
   
}
main()
{
factorial();
}