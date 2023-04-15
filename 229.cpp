#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
main()
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
		cout<<*i<<"\n";
	}
}