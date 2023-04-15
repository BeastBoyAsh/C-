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
cout<<"Total Notes= " <<h;

	
	
	
}