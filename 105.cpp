#include<iostream>
using namespace std;
main()
{
	int i,n,c;
	
	for(n=10;n<=100;n=n+1)
        {for(i=1;i<=n/2;i=i+1)
			{if (n%i==0)
			     {c=c+1;
				 }
			}
			if (c==1)
		            {cout<<"\n"<<n;
					}
			c=0;
			
			}	
	
	
}