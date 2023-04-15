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
class B{
	protected:
		int b[9],i;
	public:
	void input(){
		cout<<"\nEnter array - ";
		for(i=0;i<=5;i++)
		{
		cin>>b[i];	
		}	
	}	
	void output(){
		cout<<"\nEntered array is - ";
	    for(i=0;i<=5;i++)
		{cout<<"\n"<<b[i];
	    }
	}
};
class C:public A,public B{

	   int c[9],i;
	public:
		void sum(){
			for(i=0;i<=5;i=i++)
         {
         	c[i]=a[i]+b[i];
		    cout<<c[i]<<"\n";	
		 }
        	
		}
	
};

main()
{
	C c;
	c.A::input();
	c.B::input();
	c.A::output();
	c.B::output();
	c.sum();
}