#include <iostream>
#include <string>


class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const std::string& name)
        : m_Name(name), m_Age(-1) {}

    Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
    // Printing
}

int main()
{   
    // 隐式构造
    Entity a = "Cherno";
    Entity b = 22;
    
    PrintEntity(22);
    PrintEntity("Cherno");  // 不能做2次隐式转换
    PrintEntity(std::string("Cherno"));

    std::cin.get();
}