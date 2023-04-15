#include<iostream>
#include<conio.h>
using namespace std;

class asample
{
	int a[4];
	public:
	void getdata();
	void display();
	void asum();
};

void asample::getdata()
{
	for (int i=0;i<4;i++)
	 {
	 	cin>>a[i];
	 }
}
void asample::display()
{
	for (int i=0;i<4;i++)
	 {
	 	cout<<a[i];
	 }
}
void asample::asum()
{ 
     int s=0;
	for (int i=0;i<4;i++)
	 {
	 	s=s+a[i];
	 }
     cout<<"\nSum is "<<s;
}
main()
{
	asample a;
	a.getdata();
	a.display();
	a.asum();
	
}