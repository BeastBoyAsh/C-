#include<iostream>
using namespace std;
main()
{ 
int a=200 , b=100 , c=300,t,d,f,l;
t=a+b+c;
cout<<"Total amount is $" <<t;
d=t*10/100;
cout<<"\nNet discount is $"<<d;
f=t-d;
cout<<"\nNet amount is $" <<f;
l=f*20/100;
cout<<"\nCommission is $"<<l;
}
