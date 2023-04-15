#include<iostream>

using namespace std; 

class Multiply{
    public:
    Multiply(int num1, int num2){
        cout<<(num1*num2)<<endl;
    }
};

int main ()
{
    Multiply obj(4,2);
    return 0;
}