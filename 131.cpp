#include<iostream>
using namespace std;
main()
{
	int a,c,i;
	while(1)
 {	
 cin>>a;
 a=a+1;
 for(i=1;i<=a/2;i=i+1)
   {
   if (a%i==0)
   c=c+1;       
   }
   
   if(c==1)
   {
   cout<<a;
   break;
   }
   c=0;
 }
}