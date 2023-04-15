#include<iostream>
using namespace std;
struct array{
	int a[5];
	public:
	void input(){int i;
		for(i=0;i<5;i++)
		cin>>a[i];
	}
	void min(){
		int m,i;
		m=a[0];
		for(i=0;i<5;i++)
		{
			if(m>a[i])
			{
				m=a[i];
			}
		}
		cout<<m<<" is minimum ";
	}
	void max(){
	int m,i;
		m=a[0];
		for(i=0;i<5;i++)
		{
			if(m<a[i])
			{
				m=a[i];
			}
		}
		cout<<m<<" is maximum ";
	}	
	
};
main()
{
	array a;
	a.input();
	a.min();
	a.max();
}