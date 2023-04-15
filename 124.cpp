#include<iostream>
using namespace std;
main()
{
	int a,b,n,f=1,i;
	cout<<"Enter The Number- ";
	cin>>n;
	
	while(n!=0)
 {
 
		b=n%10; 
	    
	    for(i=b;i>=1;i=i-1)
	    {f=f*i;
		}
	    
	    cout<<f<<"\n";
	    f=1;
	    
	
		n=n/10;
 }
}

