// #include <iostream>

// class Age
// {
// private:
//     int years;
//     int months;
//     int days;

// public:
//     Age(int y, int m, int d)
//     {
//         years = y;
//         months = m;
//         days = d;
//     }

//     // Overloading + operator
//     Age operator+(Age a)
//     {
//         Age temp(0, 0, 0);

//         temp.years = years + a.years;
//         temp.months = months + a.months;
//         temp.days = days + a.days;

//         // Convert days to months
//         if (temp.days >= 30)
//         {
//             temp.months += temp.days / 30;
//             temp.days %= 30;
//         }

//         // Convert months to years
//         if (temp.months >= 12)
//         {
//             temp.years += temp.months / 12;
//             temp.months %= 12;
//         }

//         return temp;
//     }

//     void display()
//     {
//         std::cout << years << " years, "
//                   << months << " months, "
//                   << days << " days" << std::endl;
//     }
// };

// int main()
// {
//     Age age(20, 8, 15);
//     Age period(2, 5, 20);

//     Age newAge = age + period;

//     std::cout << "Current age: ";
//     age.display();

//     std::cout << "Period: ";
//     period.display();

//     std::cout << "Age after the period: ";
//     newAge.display();

//     return 0;
// }



#include <iostream>

class Age
{
private:
    int years;
    int months;
    int days;

public:
    Age(int y, int m, int d)
    {
        years = y;
        months = m;
        days = d;
    }

    // Friend function for operator overloading
    friend Age operator+(Age a1, Age a2);

    void display()
    {
        std::cout << years << " years, "
                  << months << " months, "
                  << days << " days" << std::endl;
    }
};

// Definition of friend function
Age operator+(Age a1, Age a2)
{
    Age temp(0, 0, 0);

    temp.years = a1.years + a2.years;
    temp.months = a1.months + a2.months;
    temp.days = a1.days + a2.days;

    // Convert days to months
    if (temp.days >= 30)
    {
        temp.months += temp.days / 30;
        temp.days %= 30;
    }

    // Convert months to years
    if (temp.months >= 12)
    {
        temp.years += temp.months / 12;
        temp.months %= 12;
    }

    return temp;
}

int main()
{
    Age age(20, 8, 15);
    Age period(2, 5, 20);

    Age newAge = age + period;

    std::cout << "Current age: ";
    age.display();

    std::cout << "Period: ";
    period.display();

    std::cout << "Age after the period: ";
    newAge.display();

    return 0;
}