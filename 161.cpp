#include<iostream>
using namespace std;
main()  
{
	int size,i,m=0,j;
	cout<<"Enter size of array = ";
	cin>>size;
	int a[size];
	
	for(i=0;i<size;i=i+1)
	     {
	      cin>>a[i];
         }
    for(i=0;i<size;i=i+1)
	 {
	 	if(a[i]!=0)
         {
		   a[m++]=a[i];
         }
     }
     
     while(m<size)
     { 
	 a[m++]=0;  
	 }
for(i=0;i<size;i=i+1)
 {
  cout<<a[i];
 }

}