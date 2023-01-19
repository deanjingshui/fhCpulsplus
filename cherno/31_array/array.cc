#include <iostream>
#include <array>

class Entity
{
public:
    static const int exampleSize = 5;
    int example[exampleSize];

    std::array<int, 5> another;  // 使用标准库提供的array

    Entity()
    {
        for (int i = 0; i < another.size(); i++)
            example[i] = 2;
    } 
};

int main()
{
    Entity e;

    std::cin.get();
}