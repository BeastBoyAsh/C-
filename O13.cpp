/* Polymorphism Part- 1 (Function Overloading)*/

// Polymorphism is a feature of OOPs that allows the object to behave differently in different conditions. In C++ we have two types of polymorphism:
// 1) Compile time Polymorphism – This is also known as static (or early) binding.

#include<iostream>

using namespace std; // this is namespace

class Add{
    public:
        int sum(int a, int b){
            return a+b;
        }
        int sum(int a, int b, int c){
            return a+b+c;
        }
        int sum(int a, int b, int c,int d){
            return a+b+c+d;
        }
};

int main ()
{
    Add obj;

    cout<<"Output: "<<obj.sum(10,20)<<endl;
    cout<<"Output: "<<obj.sum(10,20,30)<<endl;
    cout<<"Output: "<<obj.sum(10,20,23,62)<<endl;
    return 0;
}