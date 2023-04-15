#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
main()
{
	{
	
	vector <int> v;
	int a;
	while(1)
	{
		cin>>a;
		if (a==-1)
		break;
		v.push_back(a);
	}
	vector <int>::iterator i;
	for(i=v.begin();i<=v.end()-1;i++)
	{
		cout<<"\n Collection 1 "<<*i<<"\n";
    }
}
{
    vector <int> z;
	int b;
	while(1)
	{
		cin>>b;
		if (b==-1)
		break;
		z.push_back(b);
	}
	vector <int>::iterator j;
	for(j=z.begin();j<=z.end()-1;j++)
	{
		cout<<"\n Collection 2 "<<*j<<"\n";
    
}
}}