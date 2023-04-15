#include<iostream>
using namespace std;
void sum(int a[]){
int s=0,i;
	for(i=1;i<=5;i++){	
            s=s+a[i];
}
cout<<"Sum is "<<s;
}
void max(int a[]){
int s,i;
s=a[0];
for(i=1;i<=5;i++)
{
	if(a[i]>s)
       s=a[i];
}
cout<<"\nMax is "<<s;
}	
void min(int a[]){
int s,i;
s=a[0];
for(i=1;i<=5;i++)
{
	if(a[i]<s)
       s=a[i];
}
cout<<"\nMin is "<<s;
}	
main(){
	int a[5],i;
	cout<<"Enter The Numbers \n"<<a[i];
	for(i=1;i<=5;i++)
	  {
	  	cin>>a[i];
	  }
	  sum(a);
	  max(a);
	  min(a);
	  
}