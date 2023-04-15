#include<iostream>
#include<conio.h>
using namespace std;

class Add
{
	private:
		int a,b;
	public:
    int addition(int x,int y);
};
inline int Add::addition(int x,int y)
  {
  return(x+y);
  }
main()
{
	Add a1;
	Add b1;   
    int c=a1.addition(2,3);
    cout<<"Sum is "<<c;
	cout<<"\nSum is "<<b1.addition(7,7);
}