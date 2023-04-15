#include<iostream>
using namespace std;
main()  
{
	int size,i,m=0,z=0,y=0,x=0,t;
	cout<<"Enter size of array = ";
	cin>>size;
	
	int a[size],n;
	
	for(i=0;i<size;i=i+1)
	     {
	      cin>>a[i];
	     }
  
  
  cout<<"Enter the number- ";
  cin>>n;
  for(i=0;i<size;i=i+1)
  {
  	 if(a[i]==n)
  	    m=i+1;
  }
  for(i=m;i<size;i=i+1)
  { 
    z=a[i]+z;
  }
  for(i=0;i<m-1;i=i+1)
  {
  	 y=a[i]+y;
  }
  x=y-z;
    {
        if(x>0)
            t=x;
    	  else 
		  {
    	  	t=(x*-1);
		  }
		  	
	}
  cout<<t;
}