#include <iostream>
#include <string>

class Entity
{
private:
    int m_X, m_Y;
    mutable int var;  // 它是可以被改变的；mutable允许函数是常量，但可以修改该变量
public:
    int GetX() const  // 这个方法不会修改任何实际的类
    {
        m_X = 2;  // 不能
        var = 2;  // 可以
        return m_X;
    }
};

class Entity2
{
private:
    int* m_X, *m_Y;  // 改成指针
public:
    const int* const GetX() const  // 3个const
    {
        return m_X;
    }
};

void PrintEntiy(const Entity& e)  // 通过常量引用，因为我不想再次复制Entity类（因为需要分配空间）
{
    std::cout << e.GetX() << std::endl;
}


int main()
{
    Entity e;

}