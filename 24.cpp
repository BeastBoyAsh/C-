#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e;
	cout<<"Enter The Number:- ";
	cin>>a;
	
if (a>=10000 &&a<=99999)	
     {cout<<"The Number is 5 Digits";
         
		b=a%10;
		a=a/100;
		c=a%10;
		a=a/100;
		d=a%10;
		      
	    e=b+c+d;
	    
		cout<<"\nTotal Sum Is:- "<<e;
		
		
if(e%2==0)
               { cout<<"\nIts Even :)";
					}	 
 if(e%2!=0) 	 
               { cout<<"\nIts Odd :)";
					}	 
	 
	  }
		
	else
	
	             cout<<"\nNot Valid";	
	
}