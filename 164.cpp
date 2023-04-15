#include<iostream>
using namespace std;
main()  
{
	int size1,size2,i,j,x=0,z=0;
	cout<<"Enter no. of rows = ";
	cin>>size1;
	cout<<"Enter no. of columns = ";
	cin>>size2;
    int a[size1][size2];	
    
	
	for(i=0;i<size1;i=i+1)
	     {
         	for(j=0;j<size2;j=j+1)
			   {
			  	cin>>a[i][j];
         	   }	     
         }
    for(i=0;i<size1;i=i+1)
	     {
         	for(j=0;j<size2;j=j+1)
			   {
			  	cout<<a[i][j];
         	   }	     
	cout<<"\n";
	     } 
	     
	     
    for(i=0;i<size1;i=i+1)
	     {
         	for(j=0;j<size2;j=j+1)
			   {
			     if(i==j)
			         {
					    x=x+a[i][j];
			         }
				 if(i+j==2)
						{
						z=z+a[i][j];
                        }
         	   }	     

	     } 
cout<<"\nDiagonal 1 Sum is "<<x;
cout<<"\nDiagonal 2 Sum is "<<z;

}