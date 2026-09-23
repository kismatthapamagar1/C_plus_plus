#include <iostream>

class MyClass
{
private:
    static int count;

public:
    MyClass()
    {
        count++;
    }

    static void displayCount()
    {
        std::cout << "Total objects created: " << count << std::endl;
    }
};

// Definition and initialization of static data member
int MyClass::count = 0;

int main()
{
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::displayCount();

    return 0;
}