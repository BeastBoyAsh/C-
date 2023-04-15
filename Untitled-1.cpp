#include<stdio>
using namespace std;
main()
{ int size,i;
  cout<<"Enter size of an array";
  cin>>size;
  int a[size];

  for(i=0;i<=size;i=i+1)
   {
       cin>>a[i];
   }
 for(i=0;i<=size;i=i+1)
   {
       cout<<a[i];
   }


}