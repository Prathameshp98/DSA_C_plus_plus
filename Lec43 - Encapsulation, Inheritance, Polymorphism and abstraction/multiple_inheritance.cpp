#include<iostream>
using namespace std;
#include <cstring>

using namespace std;

// Multiple inheritance

class A{

public:
    int num;
    string str;

    void a(){
        cout << "Class A called" << endl;
    }

};

class B {
public:
    int num2;
    int num3;
    double d;

    void b(){
        cout << "Class B called" << endl;
    }

};

class C: public B, public A {

public:
    string str2;
    bool isbool;

    void c(){
        cout << "Class C called" << endl;
    }
};


int main() {

    C obj;
    obj.c();
    obj.b();
    obj.a();

    return 0;
}
