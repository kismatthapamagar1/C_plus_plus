#include <iostream>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    std::cout << "Enter array index: ";
    std::cin >> index;

    try
    {
        if (index < 0 || index >= 5)
        {
            throw index;
        }

        std::cout << "Element = " << arr[index] << std::endl;
    }
    catch (int)
    {
        std::cout << "Exception: Array index out of bounds!" << std::endl;
    }

    return 0;
}