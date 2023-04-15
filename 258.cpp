#include<iostream>
using namespace std;
class A{
		protected:
		int a[9];
	public:
		int i;
	void input(){
		cout<<"\nEnter array - ";
		for(i=0;i<=5;i++)
		{
		cin>>a[i];	}	
	}	
	void output(){
		cout<<"\nEntered array is - ";
	    for(i=0;i<=5;i++)
		{cout<<"\n"<<a[i];
	    }
	}
	
};
main(){
	A d;
	d.input();
	d.output();
	
}