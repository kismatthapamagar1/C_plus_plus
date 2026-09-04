#include <iostream>
using namespace std;

// Inline Function
inline int add(int a, int b) {
    return a + b;
}

// Function with Default Parameters
// C and D are default parameters and must be at the end
int sum(int a, int b, int c = 0, int d = 5) {
    return a + b + c + d;
}

int main() {
    // Inline usage
    cout << "Addition: " << add(4, 5) << endl;

    // Default parameters usage
    cout << "Sum (all args): " << sum(1, 2, 3, 4) << endl; // 1+2+3+4 = 10
    cout << "Sum (default args): " << sum(1, 2) << endl;   // 1+2+0+5 = 8

    return 0;
}