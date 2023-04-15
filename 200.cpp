#include<iostream>
using namespace std;

main(){
	char c[30],u[30];
	int i,d=0;;
	cout<<"Enter : - ";
	cin>>c;
	
	for(i=0;c[i]!='\0';i++)
	{
	   	if(c[i]>=65 && c[i]<=90)
		{
			u[i]=c[i]+32;
		}
		else
		if(c[i]>=97 && c[i]<=122)
		{
		   	u[i]=c[i]-32;
		}	
	cout<<u[i];
	}
}