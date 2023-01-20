#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

int main()
{
    // 1. 在栈上创建并初始化对象
    // Entity entity;
    // Entity entity("Cherno");
    Entity entity = Entity("Cherno");

    // 2. 在堆上分配
    Entity* entiy1 = new Entity("Cherno");
    delete entiy1;

    std::cin.get();
}
