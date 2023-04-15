#include<iostream>
using namespace std;
main()
{
int i,n,f=1;

for(n=5;n>=1;n=n-1)
    { 
	      for(i=n;i>=1;i=i-1)
        {
		f=f*i;
        } 
cout<<f;
cout<<"\n";
f=1;
    }
}