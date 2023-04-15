#include<iostream>
using namespace std;

main(){
	char c,d,x;
	int i,j,z;
	cout<<"Enter the alphabet = ";
	cin>>c;
	for(z=0;z<=5;z=z+1)
	{
		x=z+(int)c;
	
	for(i=1;i<=5;i=i+1)
	{
	  for(j=1;j<=i;j=j+1)
	  {
	  	cout<<x;
	  }
	 cout<<"\n";
      }
}}