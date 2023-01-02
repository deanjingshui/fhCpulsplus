#include <iostream>

void Log(const char* message);

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int Mutiply(int a, int b)
{
    Log("Multilply");
    return a * b;
}

int main()
{
    std::cout << Mutiply(5, 8) << std::endl;
    std::cin.get();
}