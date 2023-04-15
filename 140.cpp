#include<iostream>
using namespace std;
main()
{
	int i,d=0,j;
	int a[5];
	for(i=0;i<5;i=i+1)
	{
		cin>>a[i];
	}
	
		for(i=0;i<5;i=i+1)
	{
	for(j=1;j<=a[i]/2;j=j+1)
	{
		if(a[i]%j==0)
		{
			d=d+1;
		}
	}
	if(d==1)
	{
		cout<<a[i]<<"\n";
	}
	d=0;
}
	
}