#include<iostream>
using namespace std;

int show(){
int n,c,i;
cout<<"Enter the prime number : ";
cin>>n;
 while(1)
 {
 	n++;
 	for(i=1;i<=n/2;i=i+1)
 	{
 		if(n%i==0)
 		 {
 		 	c=c+1;
		  }
	 }
	 if(c==1)
	 {
 	return n;
 }
c=0; 
}
}

main()
{
	int x;
	x=show();
	cout<<"\n"<<x;
}