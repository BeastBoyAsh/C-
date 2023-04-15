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
	~integer(){
		cout<<"\nExit";
	}
		
	void show(){
		cout<<x;
		cout<<"\n"<<y;
	}
};
main()
{
	
	integer j(10,20);
	j.show();

	
}