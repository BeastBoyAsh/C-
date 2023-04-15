#include<iostream>
using namespace std;

void factorial(int n){
	int i,f=1;
	for(i=n;i>=1;i--)
	  {
	  	f=f*i;
	  }
	cout<<n;
    cout<<"\nThe factorial is: ";
    cout<<f;
}
main()
{
int n=5;
factorial(n);
}