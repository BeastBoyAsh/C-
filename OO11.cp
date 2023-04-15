#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
	static int count;
	public:
		void show();
	    void showcount();
};
int sample::count;

void sample::show()
{
	cout<<"\nHey wassup?";
}
void sample::showcount()
{
	cout<<"\nCount = "<<count;
}
main()
{
	sample a,b,c;
	a.show();
	a.showcount();
	b.show();
	b.showcount();
	c.show();
	c.showcount();
}