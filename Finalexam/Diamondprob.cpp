#include <iostream>
#include <string>

class Person
{
protected:
    std::string name;

public:
    Person(std::string n)
    {
        name = n;
    }

    void displayName()
    {
        std::cout << "Name: " << name << std::endl;
    }
};

class Student : virtual public Person
{
protected:
    int rollNo;

public:
    Student(std::string n, int r) : Person(n)
    {
        rollNo = r;
    }

    void displayStudent()
    {
        std::cout << "Roll No: " << rollNo << std::endl;
    }
};

class Teacher : virtual public Person
{
protected:
    std::string subject;

public:
    Teacher(std::string n, std::string s) : Person(n)
    {
        subject = s;
    }

    void displayTeacher()
    {
        std::cout << "Subject: " << subject << std::endl;
    }
};

class StudentTeacher : public Student, public Teacher
{
public:
    // Person is initialized by the most-derived class
    StudentTeacher(std::string n, int r, std::string s)
        : Person(n), Student(n, r), Teacher(n, s)
    {
    }

    void display()
    {
        displayName();
        displayStudent();
        displayTeacher();
    }
};

int main()
{
    StudentTeacher obj("Kismat", 101, "C++");

    obj.display();

    return 0;
}