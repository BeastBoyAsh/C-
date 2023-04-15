#include<iostream>

using namespace std; 

class Calcy{
    public:
    Calcy(int num1 , int num2){
        cout<<(num1*num2)<<endl;}
   
};

int main ()
{
    Calcy obj(4,2);
    return 0;
}