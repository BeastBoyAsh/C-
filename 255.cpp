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
		cin>>a[i];
     	}	
	}	
	void output(){
		cout<<"\nEntered array is - ";
	    for(i=0;i<=5;i++)
		{cout<<"\n"<<a[i];
	    }
	}
};
class B:public A{

	public:
		int s=0;
		void max(){
			for(i=0;i<=5;i++){
			if (s<a[i])
        {
		s=a[i];
		}
	}
			 cout<<s<<" IS LARGEST";
		
	}
};
class C:public A{
	public:
	int	
	void min(){
for(i=0;i<5;i=i+1)
  { 
if (d>a[i])
        {
		d=a[i];
		}
  }

 cout<<d<<" IS SMALLEST";
}
	
};

main()
{
    C c;
    c.A::input();
    c.A::output();
	c.min();
	B b;
	b.max();
	}