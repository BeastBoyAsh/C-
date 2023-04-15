#include<iostream>
#include<set>
#include<iterator>
using namespace std;
main()
{
	set<int,greater<int>>s;
	s.insert(10);
	s.insert(10);
	s.insert(20);
	set<int, greater<int>>::iterator i;
	for(i=s.begin();i!=s.end();i++)
	{
		cout<<*i<<"\n";
	}
}