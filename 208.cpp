#include<iostream>
using namespace std;

main(){
	char c[30];
	char k[30];
	int i,j,t,z;

	cout<<"Enter : - ";
	cin.getline(c,30);
	cout<<"Enter : - ";
	cin.getline(k,30);


	for(i=0;c[i]!='\0';i++){
	    for(j=i+1;c[j]!='\0';j++)
	{
	if(c[i]>c[j])
	{
		t=c[i];
		c[i]=c[j];
		c[j]=t;
	    }
	}
}
	for(i=0;k[i]!='\0';i++){
	    for(j=i+1;k[j]!='\0';j++)
	{
	if(k[i]>k[j])
	{
		z=k[i];
		k[i]=k[j];
		k[j]=z;
	    }
	}
}
cout<<c;
cout<<"\n"<<k;

if(c[30]==k[30])
{
	cout<<"\nYes its an annagram.";
}
else
cout<<"\nNo not an annagram.";
}