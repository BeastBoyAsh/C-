#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f;
	f.open("Questions.txt");
	int r;
	string n,m;

	int i,k,j;
    for(i=0;i<2;i++){
	cout<<"\nQuestion number." ;
	cin>>r;
	cout<<"\nEnter the question. " ;
	cin>>n;
	cout<<"\nEnter the choices. " ;
	for(j=0;j<4;j++){
	cin>>m;
      }
	
	f<<r<<"\t"<<n;
		for(j=0;j<4;j++){
	f<<"\t"<<m<<"\n";} 
	}
	f.close();

}