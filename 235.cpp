#include<iostream>
#include<stack>
using namespace std;
main()
{
	stack<int> s;
    int a;
	while(1)
	{
		cin>>a;
		if (a==-1)
		break;
	    s.push(a);
	}
	while(!s.empty()){
		cout<<s.top()<<"\n";
		s.pop();	
	}
}
	  