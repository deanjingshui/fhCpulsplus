#include <iostream>
#include <string>

std::string GetName()
{
    return "Cherno";
}

int main()
{
    std::string name = GetName();

    std::cin.get();
}