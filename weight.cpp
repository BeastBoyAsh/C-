#include<iostream>
using namespace std;

class weight {

    int kilogram;

    int gram;

    public: void getdata();

    void putdata() const;

    weight sum_weight(const weight&) const;

};

    void weight::getdata() {

        cout<<"/n Kilograms:";

        cin>>kilogram;

        cout<<"Grams:";

        cin>>gram;

}

       void weight :: putdata () const {

        cout<<kilogram<<" Kgs. and"<<gram<<" gros.\n";

       }

      weight weight::sum_weight(const weight& w2) const {

          weight temp; temp.gram = gram + w2.gram;

          temp.kilogram = temp.gram/1000;

          temp.gram = temp.gram%1000;

          temp.kilogram += kilogram+w2.kilogram;

          return (temp) ;

      }

int main () {

     weight w1,w2 ,w3;

     cout<<"Enter weight in kilograms and grams\n";

     cout<<"\n Enter weight #1" ;

      w3=w1.sum_weight (w2);

      w1.getdata();

      cout<<" \n Enter weight #2" ;

      w2.getdata();

      cout<<"/n Weight #1 = ";

      w1.putdata();

      cout<<"Weight #2 = ";

      w2.putdata();

      cout<<"Total Weight = ";

      w3.putdata();

      w3.sum_weight(w1,w2);

      return 0;
}
