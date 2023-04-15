#include<iostream>
#include<map>
#include<iterator>
using namespace std;
main()
{
	int i,j,k,x,f;
	string n,p;
	multimap<string,string>m;
	cout<<"No. of entries - ";
	cin>>x;
	for(i=1;i<=x;i++){
		cout<<"Enter name \n ";
		cin>>n;
		cout<<"Enter no. of mobile no.s \n ";
		cin>>f;
		for(j=1;j<=f;j++){
			cout<<"Enter the mobile no.s ";
			cin>>p;
			m.insert(pair<string,string>(n,p));
		}
	}
    multimap<string,string>::iterator l;
    for(l=m.begin();l!=m.end();l++)
	{
		cout<<l->first<<"\n";
		cout<<l->second<<"\n";
	}
	
}