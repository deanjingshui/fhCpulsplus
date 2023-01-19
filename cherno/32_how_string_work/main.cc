#include <iostream>

int main()
{
    const char* name = "cherno";  // C语言风格定义字符串; const 固定分配的内存块
    // 空终止字符
    // 字符串长度：从指针的内存地址开始，直到它碰到0

    char name_2[6] = {'C', 'h', 'e', 'r', 'n', 'o'};
    std::cout << name_2 << std::endl;

    char name_3[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};  // 加上空终止符
    std::cout << name_3 << std::endl;

    std::cin.get();
}