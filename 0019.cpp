#include<iostream>
using namespace std;
class integer{
	int x,y;
	public:
		integer()
		{}
		integer(int x1,int y1)
		{
			x=x1;y=y1;
		}
		void showdata(){
		cout<<"The value of x is"<<x;
		cout<<"The value of y is"<<y;
		}
};
main()
{
	integer i;
	integer j(10,20);
	j.showdata();
}