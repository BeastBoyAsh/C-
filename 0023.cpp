#include<iostream>
using namespace std;
main(){
	int *p=new int[10];
	cout<<"Enter 10 numbers ";
	for(int i=0;i<10;i++){
	cin>>*(p+i);
	}
	cout<<"\nThe numbers are ";
	for(int i=0;i<10;i++){
	cout<<"\n"<<*(p+i);
	}
	delete[]p;
	
}