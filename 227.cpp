#include<iostream>
using namespace std;
struct school{
	private:
	int rno;
	char name[30];
	int marks;
	public:
		void input(){
			cout<<"\nEnter roll number ";
			cin>>rno;
			cout<<"\nEnter name ";
	        cin>>name;
	        cout<<"\nEnter marks ";
	        cin>>marks;
		}
		void show(){
			cout<<"\nRoll number is "<<rno;
			cout<<"\nName is "<<name;
	        cout<<"\nMarks is "<<marks;
					}
		int getmarks(){
			return marks;
		}
		string getname(){
		return name;
		}
		
};
main(){
    int i;
	school s[5];
	for(i=0;i<5;i++)
	{
		s[i].input(); 
	}
	for(i=0;i<5;i++)
	{
	s[i].show();
	}
	
	cout<<"\n";
	for(i=0;i<5;i++)
	{
		if (s[0].getmarks()<s[i].getmarks())
		{
			s[0]=s[i];
		}
	}
	cout<<"\n"<<"Highest marks is "<<s[0].getmarks()<<" of "<<s[0].getname();
}