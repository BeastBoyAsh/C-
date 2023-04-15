#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f;
	f.open("270.txt",ios::app);
	int r;
	string n;
	float m;
	cout<<"\nEnter the name of student " ;
	cin>>n;
	cout<<"\nEnter the roll number of student " ;
	cin>>r;
	cout<<"\nEnter the branch of student " ;
	cin>>m;
	f<<r<<"\t"<<n<<"\t"<<m<<"\n";
	f.close();
}