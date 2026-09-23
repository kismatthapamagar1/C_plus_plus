#include <iostream>

class Division
{
public:
    void divide(int a, int b)
    {
        try
        {
            if (b == 0)
            {
                throw b;
            }

            std::cout << "Result = " << a / b << std::endl;
        }
        catch (int x)
        {
            std::cout << "Exception caught in divide()." << std::endl;
            throw;
        }
    }

    void calculate()
    {
        try
        {
            divide(20, 0);
        }
        catch (int x)
        {
            std::cout << "Exception rethrown and caught in calculate()." << std::endl;
            std::cout << "Division by zero is not allowed." << std::endl;
        }
    }
};

int main()
{
    Division d;

    d.calculate();

    return 0;
}