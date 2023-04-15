#include<iostream>
#include<fstream>
using namespace std;
main(){
	string qid,q,op1,op2,op3,op4,op5,ans,z;
	int c=0,marks,score=0;
	ifstream f;
	f.open("Data.txt");
	while(1){
		f>>qid>>q>>op1>>op2>>op3>>op4>>ans;
		if(f.eof()){
			break;
		}	
	cout<<"\nQuestion is "<<qid<<"  "<<q;
	cout<<"\n 1)"<<op1;
	cout<<"\n 3)"<<op2;
    cout<<"\n 3)"<<op3;
    cout<<"\n 4)"<<op4;
    cout<<"\nYour answer is ";
    cin>>z;
    {
    	if(ans==z){
    		c++;
		}
		cout<<c<<"/"<<qid;
	}
	f.close();	
          }
          	ofstream f1;
    f1.open("marks.txt");
    f1<<c;
    f1.close();
	
	}