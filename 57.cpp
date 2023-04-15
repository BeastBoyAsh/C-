#include<iostream>
using namespace std;
main()
{
float a,b,c;
int f;
	   cout<<"-----------------CURRENCY CONVERTER-----------------";
     cout<<"\nEneter Amount in inr/- ";
                 cin>>a;
	 
	 cout<<"\nPress, \n 1 For DOLLAR\n 2 For EURO \n 3 For WON \n 4 For YEN \n 5 For YUAN \n";
    cin>>f;
    switch(f)
  { case(1):
b=a*74.37;
       cout<<"\nAmount in dollar/- "<<b;
    break;
	case(2):   
c=a*87.13;
       cout<<"\nAmount in euro/- "<<c;
    break;
	case(3):   
c=a*0.064;
       cout<<"\nAmount in won/- "<<c;
    break;
	case(4):
c=a*0.67;
       cout<<"\nAmount in yen/- "<<c;
    break;
	case(5):   
c=a*11.47;
       cout<<"\nAmount in yuan/- "<<c;      
break;
 default:
 cout<<"\nERROR";   
     }
}