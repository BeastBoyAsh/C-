#include<iostream>
using namespace std;
main()
{
	int i,a,c=1;
	cout<<"Enter Number A : ";
	cin>>a;
	
	for(i=a;i>0;i=i-1)
	{
	   c=c*i;
	}
	   
	 cout<<"\nFACTORIAL :  " <<c ;
}