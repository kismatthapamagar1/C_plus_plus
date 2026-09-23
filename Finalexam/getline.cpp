#include <iostream>
#include <string>

class Student
{
private:
    std::string name;
    int rollno;
    std::string program;
    int studyYear;
    std::string emailAddress;

public:
    void input()
    {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);

        std::cout << "Enter roll number: ";
        std::cin >> rollno;
        std::cin.ignore();

        std::cout << "Enter program: ";
        std::getline(std::cin, program);

        std::cout << "Enter study year: ";
        std::cin >> studyYear;
        std::cin.ignore();

        std::cout << "Enter email address: ";
        std::getline(std::cin, emailAddress);
    }

    void display()
    {
        std::cout << "\nStudent Information" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollno << std::endl;
        std::cout << "Program: " << program << std::endl;
        std::cout << "Study Year: " << studyYear << std::endl;
        std::cout << "Email Address: " << emailAddress << std::endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}