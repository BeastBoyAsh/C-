#include<iostream>
using namespace std;

main(){
	char c;
	cin>>c;
	if(c>=65 && c<=90)
	{
		cout<<"Upper case = "<<(int)c;
	}
	else if(c>=97 && c<=122)
	{
		cout<<"Lower case = "<<(int)c;
	}
	else if(c>=48 && c<=57)
	{
		cout<<"Its a number = "<<c;
	}
}