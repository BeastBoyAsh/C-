#include<iostream>
using namespace std;
class integer{
	int x,y;
	public:
	integer(){}
	integer(int x1,int y1){
		x=x1;
		y=y1;
	}
	integer(integer &m){
		x=m.x;
		y=m.y;
	}	
	void show(){
		cout<<x;
		cout<<"\n"<<y;
	}
};
main()
{
	integer i;
	integer j(10,20);
	integer k(j);
	i.show();
	j.show();
	k.show();
	
}