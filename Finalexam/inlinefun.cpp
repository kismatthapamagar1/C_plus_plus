// #include <iostream>

// inline int square(int x)
// {
//     return x * x;
// }

// int main()
// {
//     int num = 5;

//     std::cout << "Square = " << square(num) << std::endl;

//     return 0;
// }

#include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    int rollNo;
    float marks1, marks2, marks3, marks4, marks5;

public:
    void getData()
    {
        std::cout << "Enter student name: ";
        std::getline(std::cin, name);

        std::cout << "Enter roll number: ";
        std::cin >> rollNo;

        std::cout << "Enter marks in 5 subjects:\n";

        std::cout << "Subject 1: ";
        std::cin >> marks1;

        std::cout << "Subject 2: ";
        std::cin >> marks2;

        std::cout << "Subject 3: ";
        std::cin >> marks3;

        std::cout << "Subject 4: ";
        std::cin >> marks4;

        std::cout << "Subject 5: ";
        std::cin >> marks5;
    }

    // Inline function to calculate total marks
    inline float totalMarks()
    {
        return marks1 + marks2 + marks3 + marks4 + marks5;
    }

    // Inline function to calculate percentage
    inline float percentage()
    {
        return totalMarks() / 5;
    }

    // Inline function to check pass or fail
    inline bool isPassed()
    {
        return (marks1 >= 40 &&
                marks2 >= 40 &&
                marks3 >= 40 &&
                marks4 >= 40 &&
                marks5 >= 40);
    }

    // Inline function to calculate grade
    inline char grade()
    {
        float percent = percentage();

        if (percent >= 80)
            return 'A';
        else if (percent >= 70)
            return 'B';
        else if (percent >= 60)
            return 'C';
        else if (percent >= 50)
            return 'D';
        else
            return 'F';
    }

    void display()
    {
        std::cout << "\n\n========== STUDENT RESULT ==========\n";

        std::cout << "Name       : " << name << "\n";
        std::cout << "Roll No.   : " << rollNo << "\n";

        std::cout << "Subject 1  : " << marks1 << "\n";
        std::cout << "Subject 2  : " << marks2 << "\n";
        std::cout << "Subject 3  : " << marks3 << "\n";
        std::cout << "Subject 4  : " << marks4 << "\n";
        std::cout << "Subject 5  : " << marks5 << "\n";

        std::cout << "------------------------------------\n";
        std::cout << "Total Marks: " << totalMarks() << "/500\n";
        std::cout << "Percentage : " << percentage() << "%\n";
        std::cout << "Grade      : " << grade() << "\n";

        if (isPassed())
            std::cout << "Result     : PASS\n";
        else
            std::cout << "Result     : FAIL\n";

        std::cout << "====================================\n";
    }
};

int main()
{
    Student student;

    student.getData();
    student.display();

    return 0;
}
