#include<iostream>
using namespace std;
main()
{ int a,b,c,d,e,f,g,h,i,j,k,l;
    cout<<"Oxygen level in Trainee 1 in 3 rounds :- \n";
  cin>>a>>b>>c;
  	cout<<"Oxygen level in Trainee 2 in 3 rounds :- \n";
  cin>>d>>e>>f;
	cout<<"Oxygen level in Trainee 3 in 3 rounds :- \n";
  cin>>g>>h>>i;
	                cout<<"\n           OXYGEN VALUES";
       	cout<<"\nRound 1";
	cout<<"\nOxygen Value Of Trainee 1  "<<a;
	cout<<"\nOxygen Value Of Trainee 2  "<<d;
	cout<<"\nOxygen Value Of Trainee 3  "<<g;
	
		cout<<"\nRound 2";
	cout<<"\nOxygen Value Of Trainee 1  "<<b;
	cout<<"\nOxygen Value Of Trainee 2  "<<e;
	cout<<"\nOxygen Value Of Trainee 3  "<<h;
	
		cout<<"\nRound 3";
	cout<<"\nOxygen Value Of Trainee 1  "<<c;
	cout<<"\nOxygen Value Of Trainee 2  "<<f;
	cout<<"\nOxygen Value Of Trainee 3  "<<i;

j=(a+d+g)/3;
k=(b+e+h)/3;
l=(c+f+i)/3;
                    cout<<"\n           AVERAGE OXYGEN VALUE";
	cout<<"\nAvg. Oxygen Value Of Trainee 1  "<<j;
	cout<<"\nAvg. Oxygen Value Of Trainee 2  "<<k;
	cout<<"\nAvg. Oxygen Value Of Trainee 3  "<<l;
	                cout<<"\n           HIGHEST OXYGEN VALUE";
if (j>k && j>l)
      {cout<<"\nTrainee 1: "<<j;
      }
      else
if(k>l && k>j)
      {cout<<"\nTrainee 2: "<<k;
      }
      else
if (l>k && l>j)
      {cout<<"\nTrainee 3: \n"<<l;
      }
                    cout<<"\n           UNFIT";
  if(j<70)
  {cout<<"\nTrainee 1 is Unfit";
  }
   
  if(k<70)
  {cout<<"\nTrainee 2 is Unfit";
  }   
      
  if(l<70)
  {cout<<"\nTrainee 3 is Unfit";
  }	
  
  if(j<70 && k<70 && l<70)
  {cout<<"\nAll are Unfit";
  }

  if(j>70 && k>70 && l>70)
  {cout<<"\nAll are Selected ";
  }
  
  


}


