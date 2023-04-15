#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f;
	f.open("zdemo.txt");
	f<<"hey";
	f.close();
}