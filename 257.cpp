#include<iostream>
using namespace std;
class A{
		protected:
		int a[9];
	public:
		int i;
	void input(){
		cout<<"\nEnter array - ";
		for(i=0;i<=5;i++)
		{
		cin>>a[i];	}	
	}	
	void output(){
		cout<<"\nEntered array is - ";
	    for(i=0;i<=5;i++)
		{cout<<"\n"<<a[i];
	    }
	}
	
};
class B:virtual public A{
		protected:
		int s=0;
		public:
		void max(){
			for(i=0;i<=5;i++){
			if (s<a[i])
        {
		s=a[i];
		}
	}
			 cout<<s<<" IS LARGEST";
    }
	
};
class C:virtual public A{
	protected:
	int c[9],b[9];
	public:
		void sum(){
			for(i=0;i<=5;i=i++)
         {
         	c[i]=a[i]+b[i];
		    cout<<c[i]<<"\n";	
		 }
        	
		}
	
};
class D:public B,public C{
	protected:
		int d=0,j;
	public:
	void prime(){
	for(i=0;i<5;i=i+1)
	{
		cin>>a[i];
	}
	
		for(i=0;i<5;i=i+1)
	{
	for(j=1;j<=a[i]/2;j=j+1)
	{
		if(a[i]%j==0)
		{
			d=d+1;
		}
	}
	if(d==1)
	{
		cout<<a[i]<<"\n";
	}
	d=0;
}
	
}
};
main(){
	D d;
	d.A::input();
	d.A::output();
	d.B::max();
	d.C::sum();
	d.prime();
	
}