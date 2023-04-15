#include<iostream>
using namespace std;

main(){
	char c[30];
	int i,d=0,j,x=0,l;
	cout<<"Enter : - ";
	cin.getline(c,30);
	
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' ')
		{
			d++;
		}
	}

    for(i=0;c[i]!='\0';i++)
	{
      x++;
	}
l=x-d;
cout<<"Total word count is "<<l;
}