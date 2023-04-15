#include<iostream>
using namespace std;
main()
{
  int a;
  cout<<"Total Weight Of Clothes:- ";
  cin>>a;
  
if(a==0)
   {cout<<"\nTotalTime Estimate: 0 mins. ";
   }
   else
if(a<=2000 && a>0)
   {cout<<"\nTotal Time Estimated:25 mins. ";
   }
   else	
if(a<=4000 && a>2001)
   {cout<<"\nTotal Time Estimated:35 mins. ";
   }	
   else	
if(a>=4001&& a<=7000)
   {cout<<"\nTotal Time Estimated:45 mins. ";
   }	
   else	

   cout<<"\nSYSTEM OVERLOAD ";	
}