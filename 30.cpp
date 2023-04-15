#include<iostream>
using namespace std;
main()
{
	int n,k,j,m,p,a,b,c,d;
	cout<<"Total no. of Monkeys. :- ";
	cin>>n;
	
	cout<<"\nTotal no. of Eatables(Bananas). :- ";
	cin>>k;
	
	cout<<"\nTotal no. of Eatables(Peanuts). :- ";
	cin>>j;
	
	cout<<"\nTotal no. of Bananas. :- ";
	cin>>m;
	
	cout<<"\nTotal no. of Peanuts. :- ";
	cin>>p;
	
	if(n<0 && k<0 && j<0 && m<0 && p<0 )
	    {cout<<"/nINVALID OUTPUT";
		}
	else
if(k>0) 
	    a=m/k;
	         c=m%k;
	         {
			 if (c!=0)
	          n=n-1;
		     }
	      
 if(j>0) 
	    b=p/j;
	          d=p%j;
	         {
			 if (d!=0)
	          n=n-1;
		     }
	 n=n-a-b;
	 
	 cout<<"\nMonkeys Left On Tree.:-  "<<n;	
	
}