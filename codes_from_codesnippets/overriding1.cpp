#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dogs bark" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meow" << endl;
    }
};

int main() {
    Animal a1;
    a1.makeSound(); // Output: Animal sound

    Dog d1;
    d1.makeSound(); // Output: Dogs bark

    Cat c1;
    c1.makeSound(); // Output: Cat meow

    return 0;
}