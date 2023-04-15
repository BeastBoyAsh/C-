#include<iostream>
using namespace std;
main()
{
int s;
cout<<"\nCASE :-";
cin>>s;

 switch(s)
      { 
	  case(1):
    	int a,b;
        cout<<"EVEN & ODD";
    	cout<<"\nEnter Number A :- ";
    	cin>>a;
    	cout<<"\nEnter Number B :- ";
    	cin>>b;
    	
    	
a%2==0? cout<<"\nA is Even":cout<<"\nA is Odd";
b%2==0? cout<<"\nB is Even":cout<<"\nB is Odd";

break;
      case(2):
	 int c;
	  cout<<"\nADDITION OF 2 NUMBERS";
	  cout<<"\nEnter Number A :- ";
    	cin>>a;
      cout<<"\nEnter Number B :- ";
    	cin>>b;
    	
       c=a+b;
       
       cout<<"\nAddition Of 2 Numbers :- "<<c;
break;
   	    case(3):
   	    cout<<"\nGREATEST OF 3 NUMBERS";
        cout<<"Enter Number A:- ";
           cin>>a;
        cout<<"\nEnter Number B:- ";
           cin>>b;
        cout<<"\nEnter Number C:- ";
           cin>>c;

a>b && a>c? cout<<"\nA is Greater": b>c? cout<<"\nB is Greatest" :cout<<"\nC is Greatest";
break;
        deafault:
        cout<<"\nINVALID OUTPUT";
	  
	      	}	
	
	
}