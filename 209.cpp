#include<iostream>
using namespace std;

main(){
	char c[30];
	int i,j,l,k;
	cout<<"Enter : - ";
	cin.getline(c,30);
	for(i=0;c[i]!='\0';i=j+1){
	    for(j=i;c[j]!=' '&& c[j]!='\0';j++)
	{
	}
	if(c[j]==' ')
	{
		cout<<c[i];
	}
	else
	{
		for(k=i;k<=j;k++)
		cout<<c[k];
	}
	cout<<(" ");
}
}