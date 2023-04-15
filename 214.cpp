#include<iostream>
#include<string.h>
using namespace std;

main(){
		char c[30],d[30];
		int e;
	cout<<"Enter : - ";
	cin.getline(c,30);
    cout<<"Enter : - ";
	cin.getline(d,30);
    strcpy(e,c);
	strcat(e,d);
	cout<<e;
	
}