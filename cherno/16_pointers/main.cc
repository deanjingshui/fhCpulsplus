#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    void* ptr_1 = NULL;   // #define NULL 0，0不是一个有效地址，c++11引入了nullptr

    int var = 8;
    int* ptr_2 = &var;
    *ptr_2 = 10;
    LOG(var);
    
    // 在堆上申请内存
    char* buffer = new char[8];
    memset(buffer, 0, 8);
    char** ptr_3 = &buffer;  // 双指针：这个指针指向另一个指针
    delete[] buffer;

    std::cin.get();
}