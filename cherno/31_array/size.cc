#include <iostream>

class Entity
{
public:
    int* example = new int[5];


    Entity()
    {
        int a[5];  // 在栈中分配的数组
        sizeof(a);  // 得到数组占了多少字节, 4*5 = 20
        int count = sizeof(a) / sizeof(int);  // 数组里有多少元素，除以数组类型的大小 20/4 = 5

        sizeof(example);  // 得到指针的大小

        for (int i = 0; i < 5; i++)
            example[i] = 2;
    }
};

int main()
{
    Entity e;

    std::cin.get();
}