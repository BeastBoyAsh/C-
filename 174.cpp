#include<iostream>
using namespace std;

void greatest(int a, int b, int c){
	cout<<a<<"\n"<<b<<"\n"<<c;
    if (a>b)
	 {
	 	if(a>c)
	 	                cout<<"\n"<<a<<" is greatest";
	 	else 
	                 	cout<<"\n"<<c<<" is greatest";
	 }
	 else if (b>c)
	                    cout<<"\n"<<b<<" is greatest";
	 else 
                         cout<<"\n"<<c<<" is greatest";
	}
   main(){
   	int a=9,b=4,c=7;
   	greatest(a,b,c);
   }