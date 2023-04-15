#include<iostream>
using namespace std;
main()
{
	int i,n,c,x,y,z=0;
	
cout<<"Enter X= ";
cin>>x;
cout<<"Enter Y= ";
cin>>y;

	
	for(n=x;n<=y;n=n+1)
        {for(i=1;i<=n/2;i=i+1)
			{if (n%i==0)
			     {c=c+1;
				 }
			}
			if (c==1)
		            {z=z+1;
					}
			c=0;
			
		}		
cout<<z;
}