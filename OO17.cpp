#include<iostream>
using namespace std;

class account
{
	float rate;
	float balance;
	public:
		account();
		void deposit();
		void withdraw();
		void compound();
		void getbalance();
		void menu();
};
account::account()
{
	cout<<"Enter the initial balance \n ";
	cin>>balance;
	cout<<"Interest rate in decimal \n ";
	cin>>rate;
}
void account::deposit()
{
	float amount;
	cout<<"Enter the amount \n";
	cin>>amount;
	balance=balance+amount;
	cout<<"Balance now is \n"<<balance;
}
void account::withdraw()
{
	float withdraw;
	cout<<"How much to withdraw? \n";
	cin>>withdraw;
	if (withdraw>balance)
	 {
	 	cout<<"Insufficient balance \n";
	 }
	 else 
	 balance=balance-withdraw;
	 cout<<"Remaining balance \n"<<balance;
}
void account::compound()
{
	float interest;
	interest=balance*rate;
	balance=balance+interest;
	cout<<"Interset amount is \n"<<interest;
	cout<<"Total amount \n"<<balance;
}
void account::getbalance()
{
	cout<<"Current balance is \n"<<balance;
}
void account::menu()
{
	cout<<"Press d -> deposit \n";
	  cout<<"Press w -> for withdraw \n";
    	cout<<"Press c -> for compound interset \n";
    		cout<<"Press g -> for getbalance \n";
    		   cout<<"Press q -> for quit \n";
    		       cout<<"Press m -> for menu \n";
}                  
main()
{
account a;
a.menu();
char ch;
while((ch=cin.get())!= 'q')
{
	switch(ch){
		case 'd':
		a.deposit();
		break;
		case 'w':
		a.withdraw();
		break;
		case 'c':
		a.compound();
		break;
		case 'g':
		a.getbalance();
		case 'm':
		a.menu();
		break;
		}		
}
}