#include<iostream>
using namespace std;
class xyz{
	int a,b,c;
	public:
		xyz(){
			a=0;
			cout<<"The value of a is "<<a;
		}
		
			xyz(int x,int y){
			b=x;
			c=y;	
			cout<<"\nThe value of b is "<<b;
			cout<<"\nThe value of c is "<<c;
		}
};
main()
{
	xyz obj;
	xyz obj1(12,13);
	
}