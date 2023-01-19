#include <iostream>
#include <string>  // 为何引入该头文件？

// 这个函数只打印字符串，故string是只读的，比较下面2种方式
void PrintString(std::string string)  // 这实际上是一个副本（字符串复制，有时间花销），不要这么做
{
    std::cout << string << std::endl;
}

void PrintString(const std::string& string)  // 而是，通过常量引用传递它
{
    std::cout << string << std::endl;
}


int main()
{
    std::string name = "cherno";  // string有一个构造函数，它接受char*或const char*参数

    std::cout << name << std::endl;  //  ”<<“这个操作符允许我们发送字符串到流中的重载版本。是在string头文件的内部

    // 追加字符串
    std::string name_1 = "cherno" + " hello";  // 报错原因：将2个const char的数组相加
    // 方法1
    std::string name_2 = "cherno";
    // name_2是一个字符串，把它加到一个字符串上，+=这个操作符在string类被重载了
    name_2 += " hello";   // 将一个指针，加到了name_2
    // 方法2
    std::string name_3 = std::string("Cherno") + " hello";  // 将2个相加的字符数组的其中一个，显示调用一个string构造函数

    // 把字符串传给函数

    std::cin.get();
}