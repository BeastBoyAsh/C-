#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
	int a,b;
	public:
    void getdata();
    friend float mean(sample s);
};
void sample::getdata()
{
	cout<<"Enter The Numbers ";
	cin>>a>>b;
}
float mean(sample s)
{
	return(s.a+s.b)/2.0;
}
main()
{
	sample s;
	s.getdata();
	cout<<"\n The mean is "<<mean;
}