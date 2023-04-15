#include<iostream>
using namespace std;
main()
{
	int i,j;
	
	for(i=1;i<=5;i=i+1)
	  {
	  for(j=1;j<=i-1;j=j+1)
	  {
	  cout<<"*";	  
	  }
	  
	   for(j=1;j<=6-i;j=j+1)
	  {
	  cout<<j;	  
	  }
	 
	  for(j=5-i;j>=1;j=j-1)
       {
	  cout<<j;	  
	 
      }
      
      for(j=1;j<=i-1;j=j+1)
      {
      	cout<<"*";	  
	  }
      cout<<" \n";
      }
	  
}
	 

