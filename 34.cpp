#include<iostream>
using namespace std;
main()
{
 int a,b,c,d,e;
cout<<"Marks In Maths :- ";
    cin>>a;
cout<<"\nMarks In Physis :- ";
    cin>>b;
cout<<"\nMarks In Chemistry :- ";
    cin>>c;
e=a+b+c;
cout<<"\nTotal Marks :- "<<e;
d=(e)/3;
cout<<"\nTotal Percentage :- "<<d;
d<=100 && d>70?cout<<"\nGrade A":d<=69 && d>50?cout<<"\nGrade B":d<=49 && d>30?cout<<"\nGrade C":cout<<"\nFAIL";

}