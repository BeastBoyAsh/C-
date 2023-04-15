#include<iostream>
using namespace std;

main(){
	char c[30];
	int i,d=0;
	cout<<"Enter alphabet: - ";
	cin>>c;
	
	for(i=0;c[i]!='\0';i++)
	{
	  if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U')	
	  {
	  	d=d+1;
	  }
	}
	cout<<"The no. of vowels are :- "<<d;
}