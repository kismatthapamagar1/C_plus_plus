#include <iostream>

class Animal
{
public:
    virtual void sound()
    {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        std::cout << "Dog barks." << std::endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        std::cout << "Cat meows." << std::endl;
    }
};

int main()
{
    Animal *ptr;

    Dog dog;
    Cat cat;

    ptr = &dog;
    ptr->sound();

    ptr = &cat;
    ptr->sound();

    return 0;
}