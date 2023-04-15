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
	void operator=(integer &m){
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
	integer j(10,20);
	integer i;
	i=j;
	i.show();
	j.show();
}