#include <iostream>

class Student
{
protected:
    int roll_number;

public:
    void getRollNumber()
    {
        std::cout << "Enter roll number: ";
        std::cin >> roll_number;
    }
};


class Test : public Student
{
protected:
    int marks1;
    int marks2;

public:
    void getMarks()
    {
        std::cout << "Enter marks of subject 1: ";
        std::cin >> marks1;

        std::cout << "Enter marks of subject 2: ";
        std::cin >> marks2;
    }
};


class Result : public Test
{
private:
    int total;

public:
    void calculate()
    {
        total = marks1 + marks2;
    }

    void display()
    {
        std::cout << "\nRoll Number = "
                  << roll_number << std::endl;

        std::cout << "Marks of Subject 1 = "
                  << marks1 << std::endl;

        std::cout << "Marks of Subject 2 = "
                  << marks2 << std::endl;

        std::cout << "Total Marks = "
                  << total << std::endl;
    }
};


int main()
{
    Result obj;

    obj.getRollNumber();
    obj.getMarks();
    obj.calculate();
    obj.display();

    return 0;
}