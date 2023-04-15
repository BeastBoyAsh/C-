#include<iostream>
using namespace std;

main(){
	char c[30];
	int i;
	cout<<"Enter Name: - ";
	cin>>c;
	
	for(i=0;c[i]!='\0';i++)
	{
		cout<<c[i]<<"\n";
	}
	
}