#include <iostream>

int main()
{   
    // 在栈上创建
    int example[5];
    example[0] = 2;
    example[4] = 4;

    // 内存访问违规（Memory access violation）
    example[-1] = 1;
    example[5] = 1;

    // 数组本质是一个指针
    int* ptr = example;
    example[2] = 5;
    *(ptr + 2) = 6;  // 等价

    // 在堆上创建
    int* another = new int[5];
    delete[] another;

    std::cout << example[0] << std::endl;
    std::cout << example << std::endl;  // example是个指针
}