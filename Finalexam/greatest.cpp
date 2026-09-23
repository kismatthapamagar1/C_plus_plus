#include <iostream>

template <class T>
T greatest(T &a, T &b, T &c)
{
    T max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    return max;
}

int main()
{
    int a=2, b=4, c=999;

    

    std::cout << "Greatest number = " << greatest<int>(a, b, c);

    return 0;
}