// #include <iostream>

// int main()
// {
//     int arr[100];
//     int n;

//     try
//     {
//         std::cout << "Enter array size: ";
//         std::cin >> n;

//         // Check array size
//         if (n <= 0 || n > 100)
//         {
//             throw "Array size is out of bounds!";
//         }

//         std::cout << "Enter " << n << " positive elements: ";

//         for (int i = 0; i < n; i++)
//         {
//             std::cin >> arr[i];

//             // Check for negative value
//             if (arr[i] < 0)
//             {
//                 throw "Array contains a negative value!";
//             }
//         }

//         int greatest = arr[0];

//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] > greatest)
//             {
//                 greatest = arr[i];
//             }
//         }

//         std::cout << "Greatest value = "
//                   << greatest << std::endl;
//     }
//     catch (const char* error)
//     {
//         std::cerr << "Error: " << error << std::endl;
//     }

//     return 0;
// }

#include <iostream>

class Array
{
private:
    int arr[10];
    int size;

public:
    Array(int n)
    {
        try
        {
            size = n;

            if (n < 0 || n > 10)
            {
                throw "Array is out of bound";
            }

            for (int i = 0; i < size; i++)
            {
                std::cout << "Enter element " << i + 1 << ": ";
                std::cin >> arr[i];

                if (arr[i] < 0)
                {
                    throw arr[i];
                }
            }
        }

        catch (const char *msg)
        {
            std::cerr << "Error: " << msg << std::endl;
        }

        catch (int n)
        {
            std::cerr << "Error: Negative value " << n
                      << " is not allowed." << std::endl;
        }
    }

    void display()
    {
        std::cout << "The array elements are: ";

        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }

        std::cout << std::endl;
    }
};

int main()
{
    Array a1(7);

    a1.display();

    return 0;
}