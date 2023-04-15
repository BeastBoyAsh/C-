#include<iostream>
using namespace std;

int show(){
	int a,f=1,i;
	cin>>a;
	for(i=a;i>=1;i--)
	{
		f=f*i;
	}
	return f;
}
main()
{
	int x;
	x=show();
	cout<<"\n"<<x;
}