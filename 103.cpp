#include<iostream>
using namespace std;
main()
{ int i,n,f=1,j,x;
cout<<"Enter Number_  ";
cin>>n;

for(i=1;i<=9;i=i+2)
{
 for(j=1;j<=i;j=j+1)
 {
f=f*n;
 } 
cout<<f;
cout<<"\n";
f=1;
}
}
	