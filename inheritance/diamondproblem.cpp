#include <iostream>

class base {
protected:
    int val;
};

class DerivedOne : virtual public base {
public:
    DerivedOne()
    {
        val = 1;
    }

    void getValue()
    {
        std::cout << "The value of the variable is: "
                  << val << std::endl;
    }
};

class DerivedTwo : virtual public base {
public:
    DerivedTwo()
    {
        val = 2;
    }

    void getValue()
    {
        std::cout << "The value of the variable is: "
                  << val << std::endl;
    }
};

class Derived : public DerivedOne, public DerivedTwo {
public:
    void getValue()
    {
        DerivedTwo::getValue();
    }
};

int main()
{
    Derived obj;
    obj.getValue();

    return 0;
}