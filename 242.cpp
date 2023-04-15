#include<iostream>
#include<map>
#include<iterator>
using namespace std;
main()
{

	int r,x,i,y;
	string n;
	int s=0;
	cout<<"Number of students ";
	cin>>y;
	map<string,int>m;
	for(i=1;i<=y;i++)
	{
	cin>>n>>r;
	m.insert(pair<string,int>(n,r));
    }
	map<string,int>::iterator j;
		cout<<"The Data is - "<<"\n";
	for(j=m.begin();j!=m.end();j++)
	{
		cout<<j->first<<"\n";
		cout<<j->second<<"\n";
	}

}
	  