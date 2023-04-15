#include<iostream>
using namespace std;
main()
{int a,b,c,s;
    cout<<"Enter Number A:- ";
            cin>>a;
	cout<<"\nEnter Number B:- ";
            cin>>b;
    cout<<"\nCase:- ";
            cin>>s;

switch(s)
   {
  case(1):
   c=a+b;
   cout<<"\nAddtion Of Both Number Is:- "<<c;
break;
   case(2):
    c=a-b;
   cout<<"\nSubtraction Of Both Number Is:- "<<c;
break;
   case(3):
    c=a*b;   
   cout<<"\nProduct Of Both Number Is:- "<<c;
break;
   case(4):
    c=a/b;
   cout<<"\nQuotient Is:- "<<c;
break;
   case(5):
    c=a%b;
   cout<<"\nRemainder Is:- "<<c;
break;
    default:
    cout<<"\nINVALID";
    }	
	
}