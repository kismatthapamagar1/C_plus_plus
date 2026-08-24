#include <iostream>
#include <string>
using namespace std;

class Cars {
public:
    string companyName;
    string modelName;
    string fuelType;
    float mileage;
    double price;

    // Default Constructor
    Cars() {
        cout << "Default constructor called" << endl;
    }

    // Parameterized Constructor
    Cars(string cName, string mName, string fType, float mil, double prc) {
        cout << "Parameterized constructor called" << endl;
        companyName = cName;
        modelName = mName;
        fuelType = fType;
        mileage = mil;
        price = prc;
    }

    // Copy Constructor
    Cars(Cars &obj) {
        cout << "Copy constructor called" << endl;
        companyName = obj.companyName;
        modelName = obj.modelName;
        fuelType = obj.fuelType;
        mileage = obj.mileage;
        price = obj.price;
    }

    // Destructor
    ~Cars() {
        cout << "Destructor called" << endl;
    }

    void displayData() {
        cout << "Company: " << companyName << ", Model: " << modelName 
             << ", Fuel: " << fuelType << ", Mileage: " << mileage 
             << ", Price: " << price << endl;
    }
};

int main() {
    Cars car1; // Default
    Cars car2("Toyota", "Fortuner", "Diesel", 10.0, 3500000); // Parameterized
    
    Cars car3 = car1; // Copy
    
    car1.displayData();
    car2.displayData();
    car3.displayData();

    return 0;
}