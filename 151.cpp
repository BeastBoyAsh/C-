#include<iostream>
using namespace std;
main()
{
   int i,a[10],j,c=1,s=0;
   for(i=0;i<10;i=i+1)
    { 
    	cin>>a[i];
    }   
		    for(i=0;i<10;i=i+1)
		          {
				  	  c=0;
					  for(j=0;j<=i;j=j+1)
                             if (a[i]==a[j])
                          	      break;
					    
					if(i==j)
					c=c+1;
               }
		cout<<c;
     {c=1;
	 }
		
}