#include<iostream>
using namespace std;
main()
{
int a,b,c,d,e,f,g,h;
cout<<"Total Gross= ";
cin>>a;
b=a/500;
a=a%500;
c=a/200;
a=a%200;
d=a/100;
a=a%100;
e=a/50;
a=a%50;
f=a/20;
a=a%20;
g=a/10;
a=a%10;
h=b+c+d+e+f+g;
cout<<"\nNo. of 500 notes= "<<b;
cout<<"\nNo. of 200 notes= "<<c;
cout<<"\nNo. of 100 notes= "<<d;
cout<<"\nNo. of 50 notes= "<<e;
cout<<"\nNo. of 20 notes= "<<f;
cout<<"\nNo. of 10 notes= "<<g;
cout<<"\nTotal Notes= " <<h;

	
	
	
}