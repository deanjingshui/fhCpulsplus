#include <iostream>

class Base
{
public:
    Base(){ }
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    Derived(){ }
    virtual ~Derived() {}
};

class AnotherClass : public Base
{
public:
    AnotherClass(){ }
    virtual ~AnotherClass() {}
};

int main()
{
    double value = 5.25;
    double a = (int)value + 5.3;

    // double s = static_cast<int>(value);
    double s = static_cast<AnotherClass*>(value);

    std::cin.get();
}