// Bubble sort is the sorting mechanism in which the adjacent members are checked and then replaced if another is greater
// outer loop 0 to n-1;
// innerloop 0 to n-i-1;


// bubble sorting is n^2 box so we can optimize the code by using this:
// bool isSwap=false;// firstly initialized to false like we initialize any variable 0 to avoid garbage value
// loop chalaune and 
// for(i=0;i<n-1;i++)
// {
//     bool isswap=false;
//     for(j=0;j<n-i-1;j++)
//     {
//         if(arr[j]>arr[j+1])
//         {
//             arr[j]=arr[j+1];
//             isSwap=true;
//         }



// if(!isSwap)
// {
//     //array is sorted already;
//     return ;
// }
// }
// }
#include <iostream>
#include <iomanip>

void bubbleSort(int marks[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;

                swapped = true;
            }
        }

        // If no swapping occurs, the array is already sorted
        if (swapped == false)
        {
            break;
        }
    }
}

void displayMarks(int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << marks[i] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    int n;

    std::cout << "Enter the number of students: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Invalid number of students." << std::endl;
        return 0;
    }

    int* marks = new int[n];

    std::cout << "\nEnter the marks of " << n << " students:\n";

    for (int i = 0; i < n; i++)
    {
        std::cout << "Student " << i + 1 << ": ";
        std::cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100)
        {
            std::cout << "Invalid marks! Enter marks between 0 and 100."
                      << std::endl;

            delete[] marks;
            return 0;
        }
    }

    std::cout << "\n----------------------------------" << std::endl;
    std::cout << "Original Marks: ";
    displayMarks(marks, n);

    // Calculate total marks
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += marks[i];
    }

    double average = static_cast<double>(total) / n;

    // Sort the marks using Bubble Sort
    bubbleSort(marks, n);

    std::cout << "Sorted Marks:   ";
    displayMarks(marks, n);

    // Lowest and highest marks
    int lowest = marks[0];
    int highest = marks[n - 1];

    // Count students above average
    int aboveAverage = 0;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] > average)
        {
            aboveAverage++;
        }
    }

    std::cout << "----------------------------------" << std::endl;

    std::cout << "Lowest Marks:       " << lowest << std::endl;
    std::cout << "Highest Marks:      " << highest << std::endl;
    std::cout << "Total Marks:        " << total << std::endl;
    std::cout << "Average Marks:      "
              << std::fixed << std::setprecision(2)
              << average << std::endl;
    std::cout << "Above Average:      " << aboveAverage
              << " students" << std::endl;

    delete[] marks;

    return 0;
}
