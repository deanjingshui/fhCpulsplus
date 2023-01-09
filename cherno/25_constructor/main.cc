#include <iostream>

class Entity
{
public:
    float X, Y;

    // void Init()
    // {
    //     X = 0.0f;
    //     Y = 0.0f;
    // }

    Entity()
    {

    }

    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

int main()
{
    Entity e(10.0f, 5.0f);
    // e.Init();
    std::cout << e.X << std::endl;
    e.Print();
    std::cin.get();
}