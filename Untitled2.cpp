#include<iostream>
using namespace std;

int show(){
int a,b,n=1,j,i;
cout<<"Enter the number : ";
cin>>a;{
for(i=a;i<=100;i++){
	for(j=1;j<=n/2;j=j+1)
	{
		if(a%i==0)
		{
			n=n+1;
		}
	}
cout<<a;
if(n==2)
{
	cout<<"\nNext prime is- ";
}
}
}
return n;
}

main()
{
	int x;
	x=show();
	cout<<"\n"<<x;
}