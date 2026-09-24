#include <iostream>
#include <cctype>

class CheckCharacter
{
public:
    void check()
    {
        char ch;

        std::cout << "Enter a character: ";
        std::cin >> ch;

        try
        {
            if (isalpha(ch))
            {
                std::cout << "Welcome!" << std::endl;
            }
            else
            {
                throw ch;
            }
        }
        catch (char x)
        {
            std::cout << "Error: Numerical character is not allowed." << std::endl;
        }
    }
};

int main()
{
    CheckCharacter c;

    c.check();

    return 0;
}