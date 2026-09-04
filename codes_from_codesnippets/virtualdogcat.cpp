#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function enables runtime polymorphism
    virtual void eat() {
        cout << "I'm eating generic food" << endl;
    }
};

class Cat : public Animal {
public:
    void eat() {
        cout << "I'm eating cat food" << endl;
    }
};

class Dog : public Animal {
public:
    void eat() {
        cout << "I'm eating dog food" << endl;
    }
};

// Standalone function using base class pointer
void function1(Animal* xyz) {
    xyz->eat();
}

int main() {
    Animal* ptr;
    Cat catObj;
    Dog dogObj;

    // Point to Cat object
    ptr = &catObj;
    function1(ptr);

    // Point to Dog object
    ptr = &dogObj;
    function1(ptr);

    return 0;
}