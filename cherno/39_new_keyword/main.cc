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
    int* p = new int;  // 在堆上分配4字节
    int* b = new int[50];  // 200 bytes

    Entity* e = new Entity();  // 在堆上分配内存，并且调用构造函数
    // new内部实际调用了C的malloc函数
    // step1 分配内存
    Entity* e1 = (Entity*)malloc(sizeof(Entity));  // 分配内存
    // step2 调用构造函数

    // delete实际调用了C的free函数
    delete e;
    delete[] b;

    std::cin.get();
}
