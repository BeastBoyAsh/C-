#include<iostream>
using namespace std;

main(){
	char c[30];
	int i,d;
	cout<<"Enter : - ";
	cin>>c;
	
	for(i=0;c[i]!='\0';i++){
		    d++;
      	}
	      for(i=d-1;i>=0;i--)
	    { 
		cout<<c[i];
	}
	
}