#include<iostream>
using namespace std;
struct student{
	private:
	int rno;
	char name[30];
	float marks;
	public:
		void input(){
    
	cout<<"\nEnter roll no. ";
	cin>>rno;
	cout<<"\nEnter name ";
	cin>>name;
	cout<<"\nAverage marks is ";
	cin>>marks;
		}
		void show(){
			cout<<"\nRoll no. is "<<rno;
			cout<<"\nName is "<<name;
			cout<<"\nAvg. marks is "<<marks;
	}
	int getmarks(){
		return marks;
	}
	string getname(){
		return name;
	}
	};
	main(){
		student x,z;
		x.input();
		z.input();
		cout<<"\n";
		x.show();
		z.show();
	
	if (x.getmarks()>z.getmarks())
	{
		cout<<"\n"<<x.getname();
	}
	else
	cout<<"\n"<<z.getname();
	
	}
	
	