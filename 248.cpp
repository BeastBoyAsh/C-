#include<iostream>
#include<map>
#include<iterator>
using namespace std;
main()
{
	int i,j,k,x,p,s=0,d;
	string n,f;
	multimap<string,int>m;
	cout<<"No. of entries - ";
	cin>>x;
	for(i=1;i<=x;i++){
		cout<<"Enter name \n ";
		cin>>n;
		cout<<"Enter the name of subject \n ";
		cin>>f;
		for(j=1;j<=2;j++){
			cout<<"Enter the marks of both 1st & 2nd term \n ";
			cin>>p;
			m.insert(pair<string,int>(n,p));
		}
	}
    multimap<string,int>::iterator l;
    for(l=m.begin();l!=m.end();l++)
	{
		cout<<l->first<<"\n";
		cout<<l->second<<"\n";
	    s=s+l->second;
	    d=s/2;
	}
	cout<<"Average marks out of 100 \n "<<d;
	
}