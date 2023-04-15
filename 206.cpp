#include<iostream>
using namespace std;

main(){
	char c[30];
	int i,j,k;
	cout<<"Enter : - ";
	cin.getline(c,30);
	
	for(i=0;c[i]!='\0';i=j+1){
		for(j=i;c[j]!=' '&& c[j]!='\0';j++)
		{
			
		}
		for(k=j-1;k>=i;k--)
		{
			cout<<c[k];
		}
		cout<<" ";
		}
		}