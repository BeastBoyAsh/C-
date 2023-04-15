#include<iostream>
using namespace std;

main(){
	char c[30];
	int i,j,l,t,k;
	cout<<"Enter : - ";
	cin.getline(c,30);
	for(i=0;c[i]!='\0';i=j+1){
	    for(j=i+i;c[j]!='\0';j++)
	{
	if(c[i]>c[j])
	{
		t=c[i];
		c[i]=c[j];
		c[j]=t;
	}
	}
}
cout<<c;
}