#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter Year :- ";
	cin>>a;
	
	a%4==0 && a%100!=0?cout<<"\nGiven Year Is A Leap Year":a%400==0? cout<<"\nGiven Year Is A Leap Year":cout<<"\nNot A Leap Year";
}