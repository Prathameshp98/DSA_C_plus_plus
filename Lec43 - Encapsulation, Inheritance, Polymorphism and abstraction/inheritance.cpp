#include<iostream>
using namespace std;
#include <cstring>

using namespace std;

class Human {

  public :
    string name;
    double height;
    double weight;

  public:
    void setWeight(double weight){
        this->weight = weight;
    }

    double getWeight(){
        return this->weight;
    }


};

// single level inheritance
class Male: public Human {

    public:
        string color;

    public:
        void sleep(){
            cout << "Male is sleeping" << endl;
        }
};


int main() {

    Male m;
    m.color = "Black";
    m.height = 23.1;
    m.name = "Human male";

    m.sleep(); 
    m.setWeight(12.34);
    cout << m.getWeight() << endl;

    return 0;
}
