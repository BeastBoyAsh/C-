#include<iostream>
using namespace std;
int main()
{
	int i,n,f=1;
	cout<<"Enter the number- ";
	cin>>n;
	for(i=n;i>=1;i=i-1)
	{
	f=f*n;
	}
	cout<<f;
}