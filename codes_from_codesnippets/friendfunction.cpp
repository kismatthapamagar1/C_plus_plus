#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
public:
    // Default Constructor
    Distance() {
        meters = 0;
    }

    // Member function to display data
    void displayData() {
        cout << "Meters value: " << meters << endl;
    }

    // Friend function declaration
    friend void addValue(Distance &d);
};

// Friend function definition (outside the class)
void addValue(Distance &d) {
    // Accessing private member 'meters' directly
    d.meters = d.meters + 5;
}

int main() {
    Distance D1;
    
    // Initial display
    D1.displayData(); // Output: 0

    // Calling friend function (no object needed for the call)
    addValue(D1);

    // Final display
    D1.displayData(); // Output: 5

    return 0;
}