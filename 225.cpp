#include<iostream>
using namespace std;
struct employee{
	private:
	int eid;
	char name[30];
	int age;
	public:
		void input(){
    
	cout<<"\nEnter employee id. ";
	cin>>eid;
	cout<<"\nEnter name ";
	cin>>name;
	cout<<"\nAge is ";
	cin>>age;
		}
		void show(){
			cout<<"\nEmployee id is "<<eid;
			cout<<"\nName is "<<name;
			cout<<"\nAge is "<<age;
		}
	int getid(){
		return eid;
	}
	int getage(){
		return age;
	}
	string getname(){
		return name;
	}
	};
	main(){
		employee x,y,z;
		x.input();
		y.input();
		z.input();
		cout<<"\n";
		x.show();
		y.show();
		z.show();
	
	cout<<"\nThe most senior aged person is - "; 
{
		
	if (x.getage()>z.getage()&&x.getage()>y.getage())
	{
		cout<<"\n"<<x.getname()<<"\nEmployee ID is "<<x.getid();
	}
	else if (y.getage()>x.getage()&&y.getage()>z.getage())
	{
	cout<<"\n"<<y.getname()<<"\nEmployee ID is "<<y.getid();
    }
    else
    cout<<'\n'<<z.getname()<<"\nEmployee ID is "<<z.getid();
}
}
	