#include<iostream>
using namespace std;
class space{
	int x,y,z;
	public:
	space(){}
	space(int x1,int y1,int z1){
		x=x1;
		y=y1;
		z=z1;
	}
	void show(){
		cout<<x;
		cout<<"\n"<<y;
		cout<<"\n"<<z;
	}
	void operator+(){
		x=-x;
		y=-y;
		z=-z;
	}
};
main()
{
	space s(10,20,-30);
	s.show();
	+s;
	cout<<"\nAfter swapping new definition ";
	s.show();
}