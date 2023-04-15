#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
main()
{
	{
		cout<<"FIRST "<<"\n";
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
  
{  
cout<<"SECOND "<<"\n";
   vector <int> z;
	int b;
while(1)
	{
		cin>>b;
		if (b==-1)
		break;
		z.push_back(b);
	}
		vector <int>::iterator i;
	for(i=z.begin();i<=z.end()-1;i++)
	{
	cout<<*i<<"\n";
}
}
}