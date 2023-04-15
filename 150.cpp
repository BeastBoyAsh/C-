#include<iostream>
using namespace std;
main()
{
   int i,a[10],j,c;
   for(i=0;i<10;i=i+1)
    { 
    	cin>>a[i];
    }   
		    for(i=0;i<10;i=i+1)
		          {
				  	  c=0;
					  for(j=i-1;j>=0;j=j-1)
                        {
							if (a[i]==a[j])
                          	   {
								c=c+1;
							   }
					    }
					    if(c==0)
                                {
								        cout<<a[i]<<"\n";
		                        }                    
                   }
}