

#include<iostream>

using namespace std; // this is namespace

class rectangle
{
       public:
                                 void getdata(int side1, int side2)
    {
        cout<<"Length of first side "<< side1 << " Length of second side " << side2;
    }


    void rectangle :: (side1,side2)
    
	float area = side1*side2;
    cout<<"Area is " << area <<"\n";
    
};

int main ()
{
    rectangle r1,r2;
    
    r1.getdata(2,3);

    r2.getdata(4,8); 

    return 0;
}
