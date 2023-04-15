#include<iostream>
using namespace std;
struct gr
{
	int a,b,c;
};
main(){
	struct gr s;
	cout<<"\n Enter the three numbers ";
	cin>>s.a>>s.b>>s.c;
	if(s.a>s.b && s.a>s.c)
	  {
	  	cout<<s.a;
	  }
	if(s.b>s.a && s.b>s.c)
	  {
	  	cout<<s.b;
	  }
	if(s.c>s.b && s.c>s.a)
	  {
	  	cout<<s.c;
	  }	
}