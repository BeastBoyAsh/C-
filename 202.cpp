#include<iostream>
using namespace std;

main(){
	char c[30];
	int i,d=0,j,x=0;
	cout<<"Enter : - ";
	cin>>c;
	
	for(i=0;c[i]!='\0';i++){
		d++;
		}
			for(i=0,j=d-1;c[i]!='\0' && j>=0;i++,j--)
	         {
	         	if(c[i]==c[j])
	         	 {
	         		x++;
				 }
	       	}
	       	
     if(x==d)
     {
	cout<<"Its a pallindrome ";
     }
		else
		{
		cout<<"Its not a pallindrome ";
	}
		
}