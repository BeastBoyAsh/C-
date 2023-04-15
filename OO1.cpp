#include<iostream>
#include<conio.h>
using namespace std;

class Add
{
	private:
		int a,b,c;
	public:
	void getdata()
    {
	cout<<"Enter 2 numbers ";
    cin>>a>>b;
	}
	void adddata()
	{
		c=a+b;
		cout<<"Sum is="<<c;
	}
};
main()
{

	Add a1;
	a1.getdata();
	a1.adddata();

}