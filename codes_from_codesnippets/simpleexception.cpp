#include <iostream>
using namespace std;

int main() {
    int numerator, denominator, result;
    cout << "Enter numerator and denominator: ";
    cin >> numerator >> denominator;

    try {
        if (denominator == 0) {
            throw denominator; // Throw an exception if denominator is zero
        }
        result = numerator / denominator;
        cout << "Division is: " << result << endl;
    } 
    catch (int ex) {
        cout << "Exception: Divide by 0 not allowed." << endl;
    }

    return 0;
}