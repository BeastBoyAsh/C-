#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f;
	f.open("261.txt");
	int r;
	string n;
	float m;
	cout<<"Enter the name of student " ;
	cin>>n;
	cout<<"\nEnter the roll number of student " ;
	cin>>r;
	cout<<"\nEnter the percentage of student " ;
	cin>>m;
	f<<r<<"\t"<<n<<"\t"<<m<<"\n";
	f.close();
}