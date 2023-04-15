#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f;
	f.open("263.txt");
	int r;
	string n;
	float m;
	int i,k;
	cout<<"\nEnter the number of entries ";
	cin>>k;
	for(i=0;i<k;i++){
	cout<<"\nEnter the name of student " ;
	cin>>n;
	cout<<"\nEnter the roll number of student " ;
	cin>>r;
	cout<<"\nEnter the percentage of student " ;
	cin>>m;
	f<<r<<"\t"<<n<<"\t"<<m<<"\n";
	}
	f.close();
}