#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=1;i<=5;i=i+1)
	  {
	  for(j=5;j>=i;j=j-1)
	  {
	  cout<<j%2;
	  }
	 cout<<"\n";
      }
}