#include<iostream>
using namespace std;
main()
{
	int i,j,c=1;
	
	for(i=1;i<=5;i=i+1)
	  {
	  c=i;
	  for(j=1;j<=i;j=j+1)
	  {
	  cout<<c+j+i;
	  c=c-2;
	  
	  }
	 cout<<"\n";
}
}

