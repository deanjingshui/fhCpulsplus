#include <iostream>
#include <string>

class Printable  // ”接口“，C++中就是一个类而已
{
public:
    virtual std::string GetClassName() = 0;  // 等于0本质上使它称为一个纯虚函数
};

class Entity : public Printable
{
public:
    virtual std::string GetName(){ return "Entity"; };
    std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}
    
    std::string GetName() override { return m_Name; }  // 可不写override
    std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)  // 传入一个”接口“
{
    std::cout << obj->GetClassName() << std::endl;
}

int main()
{
    // Printable* p1 = new Printable();  // 不能实例化

    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("cherno");
    PrintName(p);

    Print(e);
    Print(p);

    std::cin.get();
}