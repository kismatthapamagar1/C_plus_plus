#include <iostream>
using namespace std;

class ClassA {
public:
    void show() {
        cout << "Class A show function" << endl;
    }
};

class ClassB {
public:
    void show() {
        cout << "Class B show function" << endl;
    }
};

class Derived : public ClassA, public ClassB {
    // Derived class inherits from both ClassA and ClassB
};

int main() {
    Derived obj;
    
    // obj.show(); // This would cause an ambiguity error
    
    // Resolution using Scope Resolution Operator
    obj.ClassA::show(); 
    obj.ClassB::show(); 
    
    return 0;
}