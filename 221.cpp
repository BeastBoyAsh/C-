#include<iostream>
using namespace std;
struct math{
	int a,b;
	public:
		void input(){
			cout<<"Enter the numbers ";
			cin>>a>>b;
		}
		void add(){
			int c;
			c=a+b;
			cout<<c<<"\n";
		}
		void greater(){
			if(a>b){
				cout<<a<<"\n is greater";
			}
			else 
			cout<<b<<"\n is greater";
		}
		void prime(){
		int i;
		for(i=2;i<a-1;i++)
		{
			if(a%i==0)
			{
				cout<<"\n Composite";
			}
		}
		cout<<"\n Prime";
			
		for(i=2;i<b-1;i++)
		{
			if(b%i==0)
			{
				cout<<"\n Composite";
			}
		}
		cout<<"\n Prime";
			
		}

};

main(){
	math m;
	m.input();
	m.add();
	m.greater();
	m.prime();
}