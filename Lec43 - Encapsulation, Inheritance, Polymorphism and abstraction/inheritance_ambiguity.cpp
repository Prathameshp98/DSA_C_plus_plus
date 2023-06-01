#include<iostream>
using namespace std;
#include <cstring>

using namespace std;

// Hierarchial inheritance
//           A
//          / \
//         B   C
//            / \
//           D   E

class A{

public:

    void abc(){
        cout << "Class A called" << endl;
    }

};

class B {
public:

    void abc(){
        cout << "Class B called" << endl;
    }

};

class C: public A, public B {

public:
    void c(){
        cout << "Class C called" << endl;
    }
};


int main() {

    C obj;

    // use scope resolution operator to solve inheritance ambiguity
    obj.A::abc();
    obj.B::abc();


    return 0;
}
