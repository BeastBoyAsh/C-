#include<iostream>
#include<conio.h>
using namespace std;

class weight
{
	int kg,g;
	public:
	void getdata();
	void showdata();
	void adddata(weight w1,weight w2);
};
void weight::getdata()
{
	cout<<"Enter kg and g ";
	cin>>kg>>g;
}
void weight::showdata()
{
	cout<<"kg is "<<kg<<"g is "<<g;
}
void weight::adddata(weight w1,weight w2)
{
	g=w1.g + w2.g;
	kg=g/1000;
	g=g%1000;
	kg=kg+w1.kg + w2.kg;
}
main()
{
	weight w1,w2,w3;
	w1.getdata();
	w2.getdata();
	w3.adddata(w1,w2);
	w3.showdata();
	
}