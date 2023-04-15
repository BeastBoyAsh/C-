#include<iostream>
using namespace std;
class greatest
{
	int a,b,c,d;
	public:
	void twonumbers()
	{
	cout<<"Enter first number ";
	cin>>a;
	cout<<"\nEnter second number ";
	cin>>b;
	if (a>b)
	cout<<a;
	else
	cout<<b;
	}
	void threenumbers()
	{
	cout<<"\nEnter first number ";
	cin>>a;
	cout<<"\nEnter second number ";
	cin>>b;
	cout<<"\nEnter third number ";
	cin>>c;
	if (a>b)
	 {
	 	if(a>c)
	 	cout<<a;
	 	else 
	 	cout<<c;
	 }
	 else if (b>c)
	 cout<<b;
	 else 
	 cout<<c;
	}
    void fournumbers()
	{
	cout<<"\nEnter first number ";
	cin>>a;
	cout<<"\nEnter second number ";
	cin>>b;
	cout<<"\nEnter third number ";
	cin>>c;
	cout<<"\nEnter fourth number ";
	cin>>d;
    if (a>b)
      {
	    if (a > b) {  
          if (a > c) {  
            if (a > d) {  
                cout <<a;  
            }  
            else {  
                cout <<d;  
            }  
        }  
    }  
    else if (b > c) {  
         if (b > d) {  
            cout <<b;  
        }  
        else {  
            cout <<d;  
        }  
    }  
    else if (c > d) {  
        cout <<c;  
    }  
    else {  
        cout <<d;  
    }  
 
	   
}
	}
    
};

main()
{ 
greatest g;


int n;
cout<<"Enter The Numbers ";
cin>>n;
switch(n){
	case 1: g.twonumbers();
	break;
	case 2:	g.threenumbers();
	break;
	case 3:	g.fournumbers();
	break;
	default:
	cout<<"INVALID";
	}


}

		       