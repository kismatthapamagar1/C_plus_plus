#include <iostream>

template <class T>
class Array
{
private:
    T arr[5];

public:
    void input()
    {
        std::cout << "Enter 5 elements: ";

        for (int i = 0; i < 5; i++)
        {
            std::cin >> arr[i];
        }
    }

    void sort()
    {
        T temp;

        for (int i = 0; i < 5 - 1; i++)
        {
            for (int j = 0; j < 5 - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    T maximum()
    {
        T max = arr[0];

        for (int i = 1; i < 5; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        return max;
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << arr[i] << " ";
        }

        std::cout << std::endl;
    }
};

int main()
{
    Array<int> obj;

    obj.input();

    std::cout << "Original array: ";
    obj.display();

    obj.sort();

    std::cout << "Sorted array: ";
    obj.display();

    std::cout << "Maximum value: "
              << obj.maximum() << std::endl;

    return 0;
}