#include<iostream>
using namespace std;
main()
{
	int a,b,c,d;
    cout<<"Enter The 3 Digit Number:- ";
	cin>>a;
	
		b=a%10;
		a=a/10;
		c=a%10;
		a=a/10;
		d=a%10;
	   
	cout<<"\nFirst Number= "<<b;
	cout<<"\nSecond Number= "<<c;
	cout<<"\nThird Number= "<<d;
if(a==b && b==c)
         {cout<<"\nAll are same";
         }
else


 if(b>c && b>d)
	   { if (c>d)
	      {cout<<"\nThis is Second lagest number:- "<<c;
	      }
	     else
	     cout<<"\nThis is Second largest number:- "<<d;
	   
	   }   
 else
	     if(d>c)
	      {cout<<"\nThis is Second lagest number:-"<<c; 
		  }
	   
	   
}