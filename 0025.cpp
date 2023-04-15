#include<iostream>
using namespace std;
class integer{
	int *x,*p;
	public:
		integer(){};
		integer(int x1,int y1){
			x1=new int;
			*x=x1;
			y1=new int;
			*y=y1;
		}
		void add(){
			int sum=*x+*y;
			cout<<"\nThe sum is = "<<sum;
		}
};
main()
{
	integer j(10,20);
	j.add();
}