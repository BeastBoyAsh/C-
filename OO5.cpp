#include<iostream>
#include<conio.h>
using namespace std;

class Greater
{
	private:
		int a,b;
	public:
		void getdata();
		int largest();
	    void display();
};
 
 void Greater::getdata()
 {
 	cout<<"Enter two Numbers ";
    cin>>a>>b;
 }
int Greater::largest()
{
	if(a>b)
	return(a);
	else
	return(b);
}
 void Greater::display()
 {
 	cout<<largest();
 }
 main()
 {
 	Greater g;
 	g.getdata();
 	g.largest();
 	g.display();
 	
 	
 }