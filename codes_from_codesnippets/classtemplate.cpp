#include <iostream>
using namespace std;

// Template definition using T as a placeholder for the data type
template <class T>
class Weight {
private:
    T kg;

public:
    void setData(T x) {
        kg = x;
    }

    T getData() {
        return kg;
    }
};

int main() {
    // Creating an object with integer data type
    Weight<int> obj1;
    obj1.setData(5);
    cout << "Value is " << obj1.getData() << endl;

    // Creating an object with double data type
    Weight<double> obj2;
    obj2.setData(5.4534);
    cout << "Value is " << obj2.getData() << endl;

    return 0;
}