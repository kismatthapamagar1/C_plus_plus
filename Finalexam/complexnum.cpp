// #include <iostream>

// class Complex
// {
// private:
//     float real;
//     float imaginary;

// public:
//     Complex()
//     {
//         real = 0;
//         imaginary = 0;
//     }

//     Complex(float r, float i)
//     {
//         real = r;
//         imaginary = i;
//     }

//     // Overloading + operator
//     Complex operator+(Complex c)
//     {
//         Complex temp;

//         temp.real = real + c.real;
//         temp.imaginary = imaginary + c.imaginary;

//         return temp;
//     }

//     void display()
//     {
//         std::cout << real << " + " << imaginary << "i" << std::endl;
//     }
// };

// int main()
// {
//     Complex c1(3, 4);
//     Complex c2(2, 5);

//     Complex c3;

//     c3 = c1 + c2;

//     std::cout << "First complex number: ";
//     c1.display();

//     std::cout << "Second complex number: ";
//     c2.display();

//     std::cout << "Sum: ";
//     c3.display();

//     return 0;
// }







#include <iostream>

class Complex
{
private:
    float real;
    float imaginary;

public:
    Complex()
    {
        real = 0.0f;
        imaginary = 0.0f;
    }

    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }

    // Friend function for operator overloading
    friend Complex operator+(Complex c1, Complex c2);

    void display()
    {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

// Definition of friend function
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;

    return temp;
}

int main()
{
    Complex c1(3.0f, 4.0f);
    Complex c2(2.0f, 5.0f);

    Complex c3;

    c3 = c1 + c2;

    std::cout << "First complex number: ";
    c1.display();

    std::cout << "Second complex number: ";
    c2.display();

    std::cout << "Sum: ";
    c3.display();

    return 0;
}