#include<iostream>
using namespace std;
main()
{
	int a,b,n,m=0;
	cout<<"Enter The Number- ";
	cin>>n;
	a=n;
	
	while(n!=0)
	{
		b=n%10;
		m=m*10+b;
		n=n/10;
    }
	if(a==m)
    {
   	cout<<"\n Palindrome";
    }
	else
	{
	cout<<"\n Not Palindrome";	
    }
}