#include <iostream>

class Array
{
private:
    int *arr;
    int size;

public:
    // Constructor
    Array(int n)
    {
        size = n;
        arr = new int[size];

        std::cout << "Memory allocated." << std::endl;
    }

    void input()
    {
        std::cout << "Enter " << size << " elements: ";

        for (int i = 0; i < size; i++)
        {
            std::cin >> arr[i];
        }
    }

    void display()
    {
        std::cout << "Array elements: ";

        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }

        std::cout << std::endl;
    }

    // Destructor
    ~Array()
    {
        delete[] arr;

        std::cout << "Memory deallocated." << std::endl;
    }
};

int main()
{
    Array obj(5);

    obj.input();
    obj.display();

    return 0;
}