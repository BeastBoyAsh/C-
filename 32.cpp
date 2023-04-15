#include<iostream>
using namespace std;
main()
{ int a,b,c;
cout<<"Enter Number A:- ";
cin>>a;
cout<<"\nEnter Number B:- ";
cin>>b;
cout<<"\nEnter Number C:- ";
cin>>c;

a>b && a>c? cout<<"\nA is Greater": b>c? cout<<"\nB is Greatest" :cout<<"\nC is Greatest"; 

}