#include <iostream>

class Entiy
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entiy
{
public:
    const char* Name;

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

int main()
{
    std::cout << sizeof(Player) << std::endl;

    Player player;
    player.Move(5, 5);
    player.X = 2;
}