#include <iostream>
using namespace std;

// Forward declaration is required if the friend class is defined after
class MyClass1; 

class MyClass2 {
public:
    void showData(MyClass1 obj);
};

class MyClass1 {
private:
    int x;

public:
    // Making MyClass2 a friend of MyClass1
    friend class MyClass2; 

    MyClass1(int val) {
        x = val;
    }
};

// Member function of MyClass2 can now access private members of MyClass1
void MyClass2::showData(MyClass1 obj) {
    cout << "x value is " << obj.x << endl;
}

int main() {
    MyClass1 obj1(5);
    MyClass2 obj2;
    
    obj2.showData(obj1);
    
    return 0;
}