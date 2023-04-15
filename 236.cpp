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
	int z=0;
	while(!s.empty()){
	    z=z+s.top();
		s.pop();
		cout<<"SUM in series ";
	    cout<<z<<"\n";	
	}
}
	  