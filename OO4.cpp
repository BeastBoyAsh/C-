#include<iostream>
#include<conio.h>
using namespace std;

class Sample
{
	private:
	void read();
	public:
    void display();
};

void Sample:: read()
{
	cout<<"I am in private.";
}
void Sample:: display()
{
	cout<<"I am in public. \n";
    read();
}
main()
{
	Sample s;
	s.display();
}