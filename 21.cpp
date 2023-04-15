#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,f;
	cout<<"Enter First Subject Marks:- ";
	cin>>a;
	cout<<"\nEnter Third Subject Marks:- ";
	cin>>b;
	cout<<"\nEnter Second Subject Marks:- ";
	cin>>c;
	
d=a+b+c;
	 cout<<"\nTotal Marks(GOT):- "<<d;

f=d/3;
	cout<<"\nPercentage:- "<<f;
	
if(f>=75 && f<=100)
	 {cout<<"\nGrade :- A";
	 }
	
	
 if(f>=50 && f<=75)
	 {cout<<"\nGrade :- B";
	 }


 if(f>=25 && f<=50)
	 {cout<<"\nGrade :- C";
	 }


 if(f>=0 && f<=25)
	 {cout<<"\nGrade :- FAIL";
	 }
}

