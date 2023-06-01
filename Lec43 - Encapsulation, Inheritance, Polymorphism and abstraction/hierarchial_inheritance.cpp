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
    int num;
    string str;

    void a(){
        cout << "Class A called" << endl;
    }

};

class B: public A {
public:
    int num2;
    int num3;
    double d;

    void b(){
        cout << "Class B called" << endl;
    }

};

class C: public A {

public:
    string str2;
    bool isbool;

    void c(){
        cout << "Class C called" << endl;
    }
};

class D: public C {

public:
    string str3;
    bool isbool2;

    void d(){
        cout << "Class C called" << endl;
    }
};

class E: public C {

public:
    string str4;
    bool isbool3;

    void e(){
        cout << "Class C called" << endl;
    }
};


int main() {

    C obj;
    obj.c();
    obj.a();

    B obj_b;
    obj_b.b();
    obj_b.a();

    E obj_e;
    obj_e.c();
    obj_e.a();


    return 0;
}
