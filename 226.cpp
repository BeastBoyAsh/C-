#include<iostream>
using namespace std;
struct school{
	private:
	int admno;
	char name[30];
	char section[3];
	char specialization[30];
	char grade[3];
	public:
		void input(){
			cout<<"\nEnter admission number ";
			cin>>admno;
			cout<<"\nEnter name ";
	        cin>>name;
	        cout<<"\nEnter specizalization ";
	        cin>>specialization;
	        cout<<"\nEnter section ";
	        cin>>section;
	        cout<<"\nEnter grade ";
	        cin>>grade;
		}
		void show(){
			cout<<"\nAdmission number is "<<admno;
			cout<<"\nName is "<<name;
	        cout<<"\nSpecizalization is "<<specialization;
	        cout<<"\nSection is "<<section;
	        cout<<"\nGrade is "<<grade;
					}
};
main(){
	int n,i;
	cout<<"\nEnter the number of entries-  ";
	cin>>n;
	school s[1000];
	for(i=0;i<n;i++)
	{
		s[i].input();
	}
	for(i=0;i<n;i++)
	{
	s[i].show();
	}
}