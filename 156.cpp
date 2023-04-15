#include<iostream>
using namespace std;
main()  
{
	int size,i,m=0,z,j;
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
            z=a[0];
             for(i=0;i<size;i=i+1)
                {
                	 if (z<a[i] && a[i]!=m)
			         z=a[i];
			     }
              	 {
	                    cout<<"Second Greatest number is "<<z;         
	 			 }	
	
	
}