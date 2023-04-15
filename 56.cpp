#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e;
	      cout<<"Enter Marks Of 1st Subject : - ";
	cin>>a;
	      cout<<"\nEnter Marks Of 2nd Subject : - ";
	cin>>b;
	      cout<<"\nEnter Marks Of 3rd Subject : - ";
	cin>>c;
	
	d=a+b+c;
	      cout<<"\nTotal Marks : - "<<d;
	      
	e=d/3;
	      cout<<"\nTotal Percentage :- "<<e;
	           
	e>=75 ? cout<<"\nGRADE A": e>=55? cout<<"\nGRADE B" :e>=25? cout<<"\nGRADE C":cout<<"\nFAIL";
	
	
	
}