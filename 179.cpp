#include<iostream>
using namespace std;

int show(){
	int n,r,re;
    cout<<"\nEnter an integer ";
	cin>>n;
	while(n!=0){
		r=n%10;
		re=re*10+r;
		n=n/10;
		
	}    
	  
	return re;   
	
}
main()
{
	int x;
	x=show();
	cout<<"\n"<<x;
}