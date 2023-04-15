#include<iostream>
using namespace std;
main()  
{
	int size,size1,size2,i,j;
	cout<<"Enter size of first array = ";
	cin>>size1;
	
	int a[size1];
	
	for(i=0;i<size1;i=i+1)
	     {
	      cin>>a[i];
	     }
    cout<<"Enter size of second array = ";
	cin>>size2;
	
	int b[size2];
	
	for(i=0;i<size2;i=i+1)
	     {
	      cin>>b[i];
	     }
    size= size1+size2;
    int c[size];
               	for(i=0;i<size;i=i+1)
               	{
               		c[size]=a[size1];
               		c[size+size2]=b[size2];
		        }
		        for(i=0;i<20;i=i+1)
		          {cout<<c[i];
				  }

}