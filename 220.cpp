#include<iostream>
using namespace std;
struct math{
	int a,b;
	public:
		void input(){
			cout<<"Enter the numbers ";
			cin>>a>>b;
		}
		void show(){
			cout<<a<<b;
		}
};
main(){
	math m;
	m.input();
	m.show();
}