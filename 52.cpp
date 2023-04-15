#include<iostream>
using namespace std;
main()
{
	int i,a,b,c=0,d;
	cout<<"Enter Number A :- ";
	cin>>a;
	cout<<"Enter Number B :- ";
	cin>>b;
	cout<<"\nSUM OF ODD NUMBERS : " ;

    for(i=a;i<=b;i=i+1)
     {
	   if(i%2==0)
	   {
       }
       else
	   { 
	     c=c+i;
       }
     }
    cout<<"\nSUM : "<<c;
	
  

}