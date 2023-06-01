#include<iostream>
#include <cstring>

using namespace std;

// Run time polymorphism
// Method overriding
// 1. same name method 2. same args 3. only possible through inheritance

class Animal {

public:
   void speak(){
        cout << "Speaking..." << endl;
   }

};

class Dog: public Animal {

public:
    void speak(){
        cout << "Barking..." << endl;
    }
};


int main() {

    Dog d;
    d.speak();

    return 0;
}
