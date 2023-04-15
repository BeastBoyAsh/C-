#include<iostream>
using namespace std;
struct student{
	int rno;
	char name[30];
	float m1,m2,m3,a;
	
};
main()
{
	
	struct student s1,s2;
	cout<<"Enter roll no. of first student ";
	cin>>s1.rno;
	cout<<"\nEnter name ";
	cin>>s1.name;
	cout<<"\nEnter marks of 3 subjects ";
	cin>>s1.m1>>s1.m2>>s1.m3;
	s1.a=(s1.m1+s1.m2+s1.m3)/3;
	cout<<"\n Average marks is "<<s1.a;
	cout<<"\n SECOND ENTRY";
	cout<<"\nEnter roll no. of second student ";
	cin>>s2.rno;
	cout<<"\nEnter name ";
	cin>>s2.name;
	cout<<"\nEnter marks of 3 subjects ";
	cin>>s2.m1>>s2.m2>>s2.m3;
	s2.a=(s2.m1+s2.m2+s2.m3)/3;
	cout<<"\n Average marks is "<<s2.a;
	
	if(s2.a>s1.a)
	{
		cout<<"\nSecond Student"<<s2.a;
	}
	else
		cout<<"\nFirst Student"<<s1.a;
	
}
