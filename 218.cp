#include<iostream>
using namespace std;
struct student{
	int rno;
	char name[30];
	float m1,m2,m3,a;
	
};
main()
{
	int n,i;
	cout<<"\nEnter the no. of students ";
	cin>>n;	
	for(i=0;i<=n;i++)
	{
	struct student s;
	cout<<"\nEnter roll no. ";
	cin>>s.rno;
	cout<<"\nEnter name ";
	cin>>s.name;
	cout<<"\nEnter marks of 3 subjects ";
	cin>>s.m1>>s.m2>>s.m3;
	s.a=(s.m1+s.m2+s.m3)/3;
	cout<<"\nAverage marks is "<<s.a;
    }    
}
