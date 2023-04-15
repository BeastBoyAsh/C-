#include<iostream>
using namespace std;
main()  
{
	int size,i,m=0;
	cout<<"Enter size of array = ";
	cin>>size;
	
	int a[size],n;
	
	for(i=0;i<size;i=i+1)
	     {
	      cin>>a[i];
	     }
  cout<<"Enter the number- ";
  cin>>n;
  for(i=0;i<size;i=i+1)
  {
  	 if(a[i]==n)
  	    m=i+1;
  }
  if (m==0)
  cout<<"Not Found";
  else
   cout<<m;
}