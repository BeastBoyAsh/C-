#include<iostream>
using namespace std;
main()
{
	int i,j;
	
	for(i=1;i<=5;i=i+1)
	  {
	  for(j=1;j<=5-i;j=j+1)
	  {
	  cout<<"*";	  
	  }
	  
	   for(j=1;j<=i;j=j+1)
	  {
	  cout<<j;	  
	  }
	 
	  for(j=i-1;j>=1;j=j-1)
       {
	  cout<<j;	  
	 
      }
      
      for(j=i+5;j<=9;j=j+1)
      {
      	cout<<"*";	  
	  }
      cout<<" \n";
      }
	  
}
	 

