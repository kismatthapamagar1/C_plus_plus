#include <iostream>

class Division
{
private:
    double num1, num2;

public:
    void read()
    {
        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;
    }

    void calculate()
    {
        try
        {
            if (num2 == 0)
            {
                throw "Division by zero is not allowed.";
            }

            std::cout << "Result = " << num1 / num2 << std::endl;
        }
        catch (const char* message)
        {
            std::cout << "Exception: " << message << std::endl;
        }
    }
};

int main()
{
    Division d;

    d.read();
    d.calculate();

    return 0;
}