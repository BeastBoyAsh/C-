#include<iostream>
using namespace std;
main()
{ int a,b=0,i;
 cout<<"Enter Number A : ";
 cin>>a;
 
 for(i=1;i<=a;i=i+1)
 
 if(a%i==0)
   {b=b+1;
   }

 if(b==2)
 {cout<<"\nPrime Number : "<<a;
 }
 else
 cout<<"\nNot Prime Number : "<<a;
	
	
	
	
}