#include<iostream>
#include<fstream>
using namespace std;
main(){
	ifstream fin;
	fin.open("267.txt");
	int r;
	string n;
	float m;
	while(1)
	{
		fin>>r>>n>>m;
		if(fin.eof())
		break;
	    cout<<r<<"\t"<<n<<"\t"<<m<<"\n";
	}
}