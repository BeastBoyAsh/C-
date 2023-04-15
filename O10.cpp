/* Multi Level Inheritance */

//C inherits B and B inherits A

#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"My name is Ayush Singh"<<endl;
    }
};
class B : public A{
    public:
    B(){
        cout<<"I am 19 years old."<<endl;
    }
};

class C : public B{
    public:
    C(){
        cout<<"My Date Is 16th Dec. 2001 "<<endl;
    }
};

using namespace std; 
int main ()
{
    C obj;
    return 0;
}