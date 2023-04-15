#include<iostream>
#include<conio.h>
using namespace std;

class xyz;
class abc
{
	int a;
	public:
		void getdata(int i)
		{
			a=i;
		}
	friend void max(abc a1,xyz x1);
};
class xyz
{
	int x;
	public:
		void getdata(int j)
		{
			x=j;
		}
	friend void max(abc a1,xyz x1);
};

void max(abc a1,xyz x1)
{
	if (a1.a>x1.x)
	cout<<"a is greatest";
	else
	cout<<"x is greatest";
}
main()
{
	abc a1;
	xyz x1;
	a1.getdata(5);
	x1.getdata(2);
	max(a1,x1);
}