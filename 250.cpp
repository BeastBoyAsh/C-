#include<iostream>
#include<set>
#include<iterator>
using namespace std;
main()
{
	int n,x;
	set<int,greater<int>>s;
	while(1){
	cin>>n;
	s.insert(n);
	break;
    }
    if(x==2){
	cin>>n;
	s.erase(n);
    }
    }
	set<int, greater<int>>::iterator i;
	for(i=s.begin();i!=s.end();i++)
	{
		cout<<*i<<"\n";
	}
}