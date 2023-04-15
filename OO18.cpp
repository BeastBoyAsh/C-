#include<iostream>
using namespace std;
class swap{
	int data;
	public:
	void change(int data){
		data=5;
		}
};
int main()
{
	swap ch;
	int data=3;
	ch.change(data);
	cout<<"The value of the data is: "<<data;
	getch();
	
}