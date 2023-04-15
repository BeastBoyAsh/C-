#include<iostream>
using namespace std;
main()
{
	int a,b,n,m;
	cout<<"Enter The Number- ";
	cin>>n;
	
	m=9;
	while(n!=0)
	{
		b=n%10; 
        n=n/10;	    
		if(m>b)
    	m=b;
        
        
}
cout<<"Smallest=  "<<m;	
}

