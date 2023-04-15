#include<iostream>
using namespace std;
main()
{
int i,j,m;
   cin>>m;
   
    for(i=1;i<=m;i=i+1)
	   { for(j=i;j>=1;j=j-1)
	    {
	     cout<<j;
	    }	
	cout<<"\n";
    }
}