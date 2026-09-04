#include <iostream>
using namespace std;

// Template definition with two placeholders for different data types
template <class T, class U>
U add(T x, U y) {
    return x + y;
}

int main() {
    // Calling the function template with different data types
    cout << "Addition of 3 and 4.5 is " << add<int, double>(3, 4.5) << endl;
    
    return 0;
}