#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{
    "cherno";  // const char数组，长度为7
    
    const char name[8] = "che\0rno";
    std::cout << strlen(name) << std::endl;  // 3 因为一旦到0

    const char* name = u8"cherno";
    // 宽字符
    const wchar_t* name2 = L"cherno"; // 字符串由宽字符组成
    const char16_t* name3 = u"cherno";
    const char32_t* name4 = U"cherno";

    // 字符串追加
    // C++14 给出了一些方便的字符串函数
    using namespace std::string_literals;
    std::string name5 = "cherno"s + " hello";  // s是一个操作符
    const char* example = R"(Line1
    Line2
    Line2
    Line4)";

    // 字符串字面量的内存，以及它如何工作的
    // 永远保存在内存的只读区域内！永远
    char name6[] = "cherno";
    name6[2] = '1';


}