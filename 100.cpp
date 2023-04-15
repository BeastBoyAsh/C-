#include<iostream>
using namespace std;
main()
{ int i,n,f=1,g,j;
cout<<"Enter Number_ ";
cin>>n;
cout<<"Enter Power_ ";
cin>>g;

for(i=1;i<=g;i=i+2)
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
	