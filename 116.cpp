#include<iostream>
using namespace std;
main()
{
	int a,b,n,m=n;
	cout<<"Enter The Number- ";
	cin>>n;
	
	while(n!=0)
	{
		b=n%10; 
	    n=n/10;
    	if (m<b)
	    m=b;
        
}
cout<<"First Digit=  "<<b;	
}

