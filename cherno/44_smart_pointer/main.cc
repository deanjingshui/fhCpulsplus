
#include <iostream>
#include <string>
#include <memory>  // 智能指针需要

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!";
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity!";
    }

    void Print() {}
};

int main()
{
    // 空作用域
    {
        std::unique_ptr<Entity> entity = new Entity();  // 不能,没有构造函数的隐式转换
        std::unique_ptr<Entity> entity(new Entity());  // 
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();  // 更好的方式,出于异常安全,若构造函数异常，你不会得到一个没有引用的悬空指针，从而造成内存泄漏
        
        std::unique_ptr<Entity> entity1 = entity;  // 不能复制
        std::shared_ptr<Entity> entity2 = std::make_shared<Entity>();
        std::shared_ptr<Entity> entity3 = entity2;
         
        entity->Print();
        
    }

    std::cin.get();
}