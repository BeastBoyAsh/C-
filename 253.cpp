#include<iostream>
using namespace std;
class student{
	private:
		int marks;
		string name;
		public:
		void input1(){
			cout<<"\nEnter name - ";
			cin>>name;
			cout<<"\nEnter marks - ";
			cin>>marks;
		}
			void display(){
			cout<<"\nThe name is - ";
			cout<<name;
			cout<<"\nThe marks is - ";
			cout<<marks;
		}
		
};
class marks:public student{
	int m1,m2,m3;
    	public:
		void input2(){
		cout<<"\n ENter the markkks - "	;
		cin>>m1;
		cin>>m2;
		cin>>m3;
		}
		void display2(){
			int t;
			t=m1+m2+m3;
			cout<<"\n The 3 marrrks sum is - "<<t;
		}
	};
main()
{
	marks m;
	m.input2();
	m.input1();
	m.display2();
	m.display();
}