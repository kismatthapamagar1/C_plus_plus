#include <iostream>
#include <string>

class Book
{
protected:
    std::string name;
    std::string author;

    static int issueID;

public:

    Book(std::string n, std::string a)
    {
        name = n;
        author = a;
    }

    virtual void IssueBook() = 0;
    virtual void Display() = 0;

    virtual ~Book()
    {
    }
};

int Book::issueID = 1;


class ReferenceBook : public Book
{
private:
    std::string genre;
    int lateReturn;
    double fine;
    int currentID;

public:

    ReferenceBook(std::string n, std::string a, std::string g)
        : Book(n, a)
    {
        genre = g;
        lateReturn = 0;
        fine = 0;
        currentID = 0;
    }

    void IssueBook()
    {
        currentID = issueID;
        issueID++;

        std::cout << "Reference Book Issued.\n";
        std::cout << "Allowed days = 1\n";
        std::cout << "Issue ID = " << currentID << std::endl;
    }

    void Display()
    {
        std::cout << "\n----- Reference Book -----\n";

        std::cout << "Name: "
                  << name << std::endl;

        std::cout << "Author: "
                  << author << std::endl;

        std::cout << "Genre: "
                  << genre << std::endl;

        lateReturn = 5;

        fine = lateReturn * 0.5;

        std::cout << "Late Return: "
                  << lateReturn << " days" << std::endl;

        std::cout << "Fine: Rs. "
                  << fine << std::endl;

        std::cout << "Issue ID: "
                  << currentID << std::endl;
    }
};


class IssueableBook : public Book
{
private:
    std::string genre;
    int lateReturn;
    double fine;
    int currentID;

public:

    IssueableBook(std::string n, std::string a, std::string g)
        : Book(n, a)
    {
        genre = g;
        lateReturn = 0;
        fine = 0;
        currentID = 0;
    }

    void IssueBook()
    {
        currentID = issueID;
        issueID++;

        std::cout << "Issuable Book Issued.\n";
        std::cout << "Allowed days = 30\n";
        std::cout << "Issue ID = " << currentID << std::endl;
    }

    void Display()
    {
        std::cout << "\n----- Issuable Book -----\n";

        std::cout << "Name: "
                  << name << std::endl;

        std::cout << "Author: "
                  << author << std::endl;

        std::cout << "Genre: "
                  << genre << std::endl;

        lateReturn = 2;

        fine = lateReturn * 1;

        std::cout << "Late Return: "
                  << lateReturn << " days" << std::endl;

        std::cout << "Fine: Rs. "
                  << fine << std::endl;

        std::cout << "Issue ID: "
                  << currentID << std::endl;
    }
};


int main()
{
    ReferenceBook reference(
        "C++ Programming",
        "Bjarne Stroustrup",
        "Programming"
    );

    IssueableBook issuable(
        "Computer Networks",
        "Andrew Tanenbaum",
        "Networking"
    );


    Book *book1 = &reference;
    Book *book2 = &issuable;


    book1->IssueBook();
    book1->Display();


    book2->IssueBook();
    book2->Display();


    return 0;
}