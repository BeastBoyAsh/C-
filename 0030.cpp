#include<iostream>
using namespace std;
class base{
	private:
	void display1(){
		cout<<"I am in private base ";
	}
	protected:
	void display2(){
		cout<<"I am in protected base ";
	}
	public:
	void display3(){
		cout<<"I am in public base ";
	}
};
class der:protected base{
	public:
	void display4(){
		cout<<"I am in derivedbase ";
	}
};
main()
{
	der d;

	d.display2();
	d.display3();
	d.display4();
}