#include <iostream>
using namespace std;

class Complex {
private:
    int real, image;

public:
    // Default constructor
    Complex() : real(0), image(0) {}

    // Parameterized constructor
    Complex(int r, int i) : real(r), image(i) {}

    // Overloading the '+' operator
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.image = image + c.image;
        return temp;
    }

    // Function to print the complex number
    void print() {
        cout << real << " + " << image << "i" << endl;
    }
};

int main() {
    Complex c1(5, 4);
    Complex c2(2, 5);
    Complex c3(1, 1);
    
    // Using the overloaded '+' operator
    Complex c4 = c1 + c2 + c3;
    
    c4.print();
    
    return 0;
}