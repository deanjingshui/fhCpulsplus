#include <iostream>
#include <string>

class Example
{
public:
    Example()
    {
        std::cout << "Created Entiy!" << std::endl;
    }
    Example(int x)
    {
        std::cout << "Creatd Entiy with" << x << "!" << std::endl;
    }
};

class Entity
{
private:
    std::string m_Name;
    int m_Score;
    Example m_Example;  // 在这里创建一次
public:
    // Entity()
    // {
    //     m_Name = "Unkown";
    //     m_Score = 0;
    //     m_Example = Example(8);  // 在这里又创建一次
    // }
    Entity()
        : m_Name("Unkown"), m_Score(0), m_Example(Example(8))  // 构造函数初始化成员列表；须按顺序; Example只创建一次
    {
    }

    // Entity(const std::string& name)
    // {
    //     m_Name = name;
    // }
    Entity(const std::string& name)
        : m_Name(name)
    {
    }


    const std::string& GetName() const
    { 
        return m_Name;
    }
};

int main()
{
    const Entity e0;
    std::cout << e0.GetName() << std::endl;
    
    const Entity e1("Cherno");
    std::cout << e1.GetName() << std::endl;


    std::cin.get();
}
