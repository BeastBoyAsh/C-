#include<iostream>
using namespace std;

main(){
	char c;
	cout<<"Enter the alphabet ";
	cin>>c;
	
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		cout<<"Its a vowel ="<<c;
	}
	else 
	cout<<"Its not a vowel ="<<c;
}