#include<iostream>
using namespace std;
main()
{
int i,a[5],s=0;
for(i=0;i<3;i=i+1)
 {
 cin>>a[i];
 }
 s=a[0];
for(i=0;i<3;i=i+1)
  { 
if (s<a[i])
        {
		s=a[i];
		}
  }

 cout<<s<<" IS LARGEST";
}