#include<iostream>
using namespace std;

main(){
	char c[30];
	int i,u=0,l=0;
	cout<<"Enter: - ";
	cin>>c;
	
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]>=65 && c[i]<=90)
		{
			u=u+1;
		}
		else
		{
		l=l+1;
	    }
	}
	cout<<"\n Upper case letters are :- "<<u;
	cout<<"\n Lower case letters are :- "<<l;
 
 
 	if(u>l)
	{
		cout<<"\n Uppercase letters are more ";
	}
	else
	    cout<<"\n Lowercase letters are more ";
	

}