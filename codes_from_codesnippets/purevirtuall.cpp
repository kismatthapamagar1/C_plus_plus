#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure Virtual Function
    virtual void getArea() = 0;
};

// Derived Class: Circle
class Circle : public Shape {
public:
    void getArea() {
        int r;
        cout << "Enter circle radius: ";
        cin >> r;
        cout << "Area of circle is: " << 3.14 * r * r << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
public:
    void getArea() {
        int l, b;
        cout << "Enter length and breadth to calculate area of rectangle: ";
        cin >> l >> b;
        cout << "Area of rectangle is: " << l * b << endl;
    }
};

int main() {
    // Shape s1; // Error: Cannot instantiate an abstract class
    
    Circle c1;
    c1.getArea();
    
    Rectangle r1;
    r1.getArea();
    
    return 0;
}
