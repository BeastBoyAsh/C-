#include<iostream>
using namespace std;
class complex{
	float real;
	float image;
	public:
		complex(){}
		complex(float x,float y){
			real=x;
			image=y;
		}
		complex operator+(complex);
		void show();
};
complex complex::operator+(complex c2){
	complex c3 ;
	c3.real=real+c2.real;
	c3.image=image+c2.image;
	return(c3);
}
void complex::show()
{
	cout<<real<<"+j"<<image;
}
main()
{
	complex c1(3.2,5.2);
	complex c2(7.2,8.2);
	complex c3;
	c3=c1+c2;
	c1.show();
	c2.show();
	c3.show();
}