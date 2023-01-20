#include <iostream>
#include <string>

void PrintEntity(const Entity& e);

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        // Entity* e = this;
        // e->x = x;
       (*this).x = x;
       // or
       this->x = x;
       this->y = y;

       PrintEntity(*this);
    }

    int GetX() const
    {

    }
};

void PrintEntity(Entity* e)
{

}

int main()
{


    std::cin.get();
}