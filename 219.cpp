#include<iostream>
using namespace std;
struct student{
	int rno;
	char name[30];
	float m1,m2,m3,a;
	
};
main()
{
	int i,j,t;
	struct student s[6];
	for(i=0;i<5;i++){
	cout<<"\nEnter roll no. ";
	cin>>s[i].rno;
	cout<<"\nEnter name ";
	cin>>s[i].name;
	cout<<"\nEnter marks of 3 subjects ";
	cin>>s[i].m1>>s[i].m2>>s[i].m3;
	s[i].a=(s[i].m1+s[i].m2+s[i].m3)/3;
	cout<<"\nAverage marks is "<<s[i].a;
    }    
    for(i=0;i<5;i++){
    	if(s[6].a<s[i].a)
    	s[6].a=s[i].a;
	}
	cout<<"\nHighest marks is "<<s[6].a<<" of TOPPER";
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(s[i].a>s[j].a)
			{
				t=s[i].a;
				s[i].a=s[j].a;
				s[j].a=t;
	    	}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<s[i].a;
	}
}