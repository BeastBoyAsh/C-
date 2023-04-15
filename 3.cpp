#include<iostream>
using namespace std;
main()
{int a=12783,b,c,d,f;
b=a%10;
cout<<"b is " <<b;
a=a/100;
c=a%10;
cout<<"\nc is " <<c;
a=a/100;
d=a%10;
cout<<"\nd is " <<d;
f=b+c+d;
cout<<"\nSUM is"<<f;



}