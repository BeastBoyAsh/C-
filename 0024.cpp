#include<iostream>
using namespace std;
main(){
int a=10;
int*p;
p=&a;
cout<<"\nValue of a is "<<a;
cout<<"\nValue of a is "<<*p;
cout<<"\nValue of a is "<<*&a;

cout<<"\nAddress of a is "<<&a;
cout<<"\nAddress of a is "<<p;

cout<<"\nAddress of pointer is"<<&p;


}


