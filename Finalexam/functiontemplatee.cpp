#include <iostream>

template <class T>
class Test
{
private:
    T value;

public:
    void setValue(T v);
    void display();
};

template <class T>
void Test<T>::setValue(T v)
{
    value = v;
}

template <class T>
void Test<T>::display()
{
    std::cout << "Value = " << value << std::endl;
}

int main()
{
    Test<int> a;
    a.setValue(10);
    a.display();

    Test<float> b;
    b.setValue(5.5);
    b.display();

    return 0;
}