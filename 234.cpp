#include<iostream>
#include<stack>
using namespace std;
main()
{
	stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
	s.pop();
	s.pop();
	while(!s.empty()){
		cout<<s.top();
		s.pop();
		
	}
}
	  