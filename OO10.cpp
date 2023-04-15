#include<iostream>
#include<conio.h>
using namespace std;

class Greater
{
	private:
		int a,b;
	public:
		void getdata();
   
        void largest();
    
  
		
};
void Greater::getdata()
{
	{
 	cout<<"Enter two Numbers ";
    cin>>a>>b;
   }
}
void Greater::largest()
{
	 {
	if(a>b)
	cout<<a;
	else
	cout<<b;
   }
}
 main()
 {
 	Greater g;
 	g.getdata();
 	g.largest();
 
 	
 	
 }