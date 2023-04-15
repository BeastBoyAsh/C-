#include<iostream>
using namespace std;
main()  
{
	int size,i,m=0;
	cout<<"Enter size of array = ";
	cin>>size;
	
	int a[size];
	
	for(i=0;i<size;i=i+1)
	     {
	      cin>>a[i];
	     }
	m=a[0];
    for(i=0;i<size;i=i+1)
	 { 
	    if  (m<a[i])
	    {
	    	m=a[i];
		}
     }
    
              	 {
	                    cout<<"Greatest number is "<<m;         
	 			 }	
	
	
}