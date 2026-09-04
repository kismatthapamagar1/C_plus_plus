#include <iostream>
using namespace std;

class MyClass {
private:
    int x;
    static int count;

public:
    MyClass() {
        count++;
    }

    // Static member function
    static int getCount() {
        return count;
    }
};

// Initialization of static data member outside the class
int MyClass::count = 0;

int main() {
    cout << "Initial count: " << MyClass::getCount() << endl;

    MyClass obj1;
    MyClass obj2;

    cout << "Count after two objects: " << MyClass::getCount() << endl;

    return 0;
}