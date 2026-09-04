#include <iostream>
using namespace std;

// 1. Two integers
int add(int a, int b) {
    cout << "Function 1" << endl;
    return a + b;
}

// 2. Two doubles
double add(double a, double b) {
    cout << "Function 2" << endl;
    return a + b;
}

// 3. Three integers
int add(int a, int b, int c) {
    cout << "Function 3" << endl;
    return a + b + c;
}

// 4. Integer then Double
double add(int a, double b) {
    cout << "Function 4" << endl;
    return a + b;
}

// 5. Double then Integer
double add(double a, int b) {
    cout << "Function 5" << endl;
    return a + b;
}

int main() {
    cout << "Addition: " << add(1, 2) << endl;         // Calls Function 1
    cout << "Addition: " << add(3.5, 4.5) << endl;     // Calls Function 2
    cout << "Addition: " << add(3, 4, 5) << endl;      // Calls Function 3
    cout << "Addition: " << add(3, 4.5) << endl;       // Calls Function 4
    cout << "Addition: " << add(3.5, 4) << endl;       // Calls Function 5
    return 0;
}