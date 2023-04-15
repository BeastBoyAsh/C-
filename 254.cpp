#include<iostream>
using namespace std;
class marks{
	protected:
		int m1,m2,m3;
		public:
		void input(){
		cout<<"\n Enter marks - ";
		cin>>m1;
		cin>>m2;
		cin>>m3;	
		}
		
};
class sport:public marks{
    	public:
    	int s;
		void input(){
		int s;	
		cout<<"\n Enter sports marks - "	;
		cin>>s;
		}
		void total(){
			float t;
			t=m1+m2+m3+s;
			cout<<"\n The total sum is - "<<t;
    }
};
main()
{
	sport s;
	s.marks::input();
	s.input();
	s.total();
}