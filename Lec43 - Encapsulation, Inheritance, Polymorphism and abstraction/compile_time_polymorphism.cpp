#include<iostream>
using namespace std;
#include <cstring>

using namespace std;

// compile time polymorphism is also called static polymorphism
// 1. function overloading
// 2. operator overloading

class A {

public:
    int a;

    // function overloading
    void sayHello(){
        cout << "Hello Patil" << endl;
    }

    void sayHello(char name){
        cout << "Hello " << name << endl;
    }

    void sayHello(string name){
        cout << "Hello " << name << endl;
    }

    void sayHello(string name, int num){
        cout << "Hello " << name << endl;
    }

    // operator overloading
    void operator+ (A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output: " << value2 - value1 << endl;
    }

    void operator() (){
        cout << "bracket overloaded" << endl;
    }
};


int main() {

    A obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    obj1();

    return 0;
}
