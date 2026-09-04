#include <iostream>
using namespace std;

class Weight {
private:
    int kg;

public:
    // Default Constructor
    Weight() : kg(0) {}

    // Parameterized Constructor
    Weight(int x) : kg(x) {}

    // Function to display the weight
    void printWeight() {
        cout << "Weight in kg: " << kg << endl;
    }

    // Overloading Pre-increment
    Weight operator++() {
        Weight temp;
        temp.kg = ++kg;
        return temp;
    }

    // Overloading Post-increment
    Weight operator++(int) {
        Weight temp;
        temp.kg = kg++;
        return temp;
    }

    // Overloading Pre-decrement
    Weight operator--() {
        Weight temp;
        temp.kg = --kg;
        return temp;
    }

    // Overloading Post-decrement
    Weight operator--(int) {
        Weight temp;
        temp.kg = kg--;
        return temp;
    }
};

int main() {
    Weight obj1(5);
    Weight obj2;

    // Testing overloaded operators
    obj2 = ++obj1; // Pre-increment
    obj2.printWeight();

    obj1++;        // Post-increment
    obj1.printWeight();

    --obj1;        // Pre-decrement
    obj1.printWeight();

    obj1--;        // Post-decrement
    obj1.printWeight();

    return 0;
}