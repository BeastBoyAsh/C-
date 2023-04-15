#include<iostream>
#include<map>
#include<iterator>
using namespace std;
main()
{
	map<string,int>m;
	m.insert(pair<string,int>("Ashu",20));
	m.insert(pair<string,int>("Ayush",20));
	map<string,int>::iterator i;
	for(i=m.begin();i!=m.end();i++)
	{
		cout<<i->first;
		cout<<i->second;
	}
	}
	  