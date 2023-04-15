#include<iostream>
using namespace std;
main()
{ int i,n,f=1,j;

for(i=1;i<=5;i=i+1)
{
 for(j=1;j<=6-i;j=j+1)
 
 {
 
f=f*i;
 } 
cout<<f;
cout<<"\n";
f=1;
}
}
	