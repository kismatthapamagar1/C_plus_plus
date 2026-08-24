#include <iostream>
using namespace std;

// Base class
class ClassA {
public:
    int a;
};

// Intermediate classes using virtual inheritance to resolve the Diamond Problem
class ClassB : virtual public ClassA {
public:
    int b;
};

class ClassC : virtual public ClassA {
public:
    int c;
};

// Derived class
class ClassD : public ClassB, public ClassC {
public:
    int d;
};

int main() {
    ClassD obj;

    // Now obj.a is accessed unambiguously due to virtual inheritance
    obj.a = 10; 
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "Value of a: " << obj.a << endl;
    cout << "Value of b: " << obj.b << endl;
    cout << "Value of c: " << obj.c << endl;
    cout << "Value of d: " << obj.d << endl;

    return 0;
}