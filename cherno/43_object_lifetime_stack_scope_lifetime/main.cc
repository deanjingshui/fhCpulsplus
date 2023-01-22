
#include <iostream>
#include <string>

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
};

int* CreateArray()
{
    int array[50];  // 在栈上创建
    return array;  // 不能，它返回一个指向栈内存的指针，一旦离开作用域，内存就会被清除

    // 方式1 在堆上分配数组
    int* array = new int[50];
    return array;


}

// 方式2 将这里创建的数据复制给一个在栈作用域之外存在的变量
void CreateArray2(int* array)
{
    // fill our array
}

// 手写一个作用域指针
class ScopedPtr
{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
        : m_Ptr(ptr)
    {
    }

    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};

int main()
{
    int array[50];
    CreateArray2(array);

    {
        ScopedPtr e = new Entity();  // me: 隐式构造?
        Entity* e = new Entity();
    }

    std::cin.get();
}