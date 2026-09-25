#include <iostream>

class TimeZone
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    TimeZone(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    TimeZone operator+(TimeZone t)
    {
        TimeZone temp(0, 0, 0);

        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours;

        if (temp.seconds >= 60)
        {
            temp.seconds = temp.seconds - 60;
            temp.minutes++;
        }

        if (temp.minutes >= 60)
        {
            temp.minutes = temp.minutes - 60;
            temp.hours++;
        }

        return temp;
    }

    friend std::ostream& operator<<(std::ostream& out, TimeZone t); //imp 
};

std::ostream& operator<<(std::ostream& out, TimeZone t)
{
    out << t.hours << " hours "
        << t.minutes << " minutes "
        << t.seconds << " seconds";

    return out;
}

int main()
{
    TimeZone t1(5, 45, 40);
    TimeZone t2(3, 30, 30);

    TimeZone t3 = t1 + t2;

    std::cout << "First Time: " << t1 << std::endl;
    std::cout << "Second Time: " << t2 << std::endl;
    std::cout << "Sum: " << t3 << std::endl;

    return 0;
}