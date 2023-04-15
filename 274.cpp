#include<iostream>
#include<fstream>
using namespace std;
main(){
	string qid,q,op1,op2,op3,op4,op5,ans,z,branch,sem,name,score;
	int c=0,marks,rollno;
	ifstream f;
	f.open("Data.txt");
	int r;
	cout<<"\nEnter roll numnber ";
	cin>>r;
	fstream f1;
	f1.open("reportcard.txt");
	while(1){
		f1>>rollno>>name>>branch>>sem>>score;
		if(f1.eof())
		            {
			break;
		            }
		if(r==rollno){
			cout<<"\nAlready exist "<<"\n";
			cout<<"\nThe score is "<<score;
	      }
	}
    
   	cout<<"\nEnter name of student ";
	cin>>name;
	
	cout<<"\nEnter branch of student ";
	cin>>branch;
	
	cout<<"\nEnter sem of student ";
	cin>>sem;
	
	
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
	
	}
	f.close();
	f1.close();	
          
    fstream f2;
    f2.open("reportcard.txt",ios::app);

    f2<<rollno<<"\t"<<name<<"\t"<<branch<<"\t"<<sem<<"\t"<<c<<"\n";
    f2.close();
	
	}