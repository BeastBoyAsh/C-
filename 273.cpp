#include<iostream>
#include<fstream>
using namespace std;
main(){
	int rollno,sem,y,score,c=0;
	string name,branch,x;
	ifstream fin;
	fin.open("score.txt");
	cin>>x>>y;
	while(1)
	{
		fin>>rollno>>name>>branch>>sem>>score;
		if(fin.eof()){
			break;
		}
	if(branch==x&&sem==y)
	{
		if(score>5)
		{
			cout<<"PASS"<<rollno<<" "<<name;
		}
	}
}
fin.close();
}