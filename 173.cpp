#include<iostream>
using namespace std;

void prime(int a,int b){
	int x,i,j,c=1;
	cout<<a<<"\n"<<b;
for(j=a;j<=b;j++)
{
  	x=j;	
	for(i=1;i<j;i++)
	if (x%i==0)
	{
	  {
	  	c=c+1;
	  }
    }
  if(c==2)
    	cout<<"\n"<<i<<" Its a prime number ";
    	else
    	cout<<"\n"<<i<<" Its not a prime number ";
}}
main()
{
	int a=3,b=7;
	prime(a,b);
}
		
	
