#include<iostream>
using namespace std;
main()
{
int i,a[7],s=1;
for(i=0;i<=6;i=i+1)
 {
 cin>>a[i];
 }
 for(i=0;i<=6;i=i+1)
 {
 s=s*a[i];
 }
 cout<<s;
}