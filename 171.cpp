#include<iostream>
using namespace std;

void armstrong(int n){
	int r=0,b,m,s=0;
	m=n;
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		s=s+(b*b*b);
	}
	cout<<m;
	if(s==m){
		cout<<"\nIts an armstrong number : ";
	}
	else
	cout<<"\nIts not an armstrong number : ";
}
main(){
	int n=153;
	armstrong(n);
}