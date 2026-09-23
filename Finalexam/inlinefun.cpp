#include <iostream>

inline int square(int x)
{
    return x * x;
}

int main()
{
    int num = 5;

    std::cout << "Square = " << square(num) << std::endl;

    return 0;
}