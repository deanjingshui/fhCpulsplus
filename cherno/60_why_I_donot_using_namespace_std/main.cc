#include <iostream>
#include <string>
#include <algorithm>

namespace apple{

    void print(const std::string& text)
    {
        std::cout << text << std::endl;
    }
}

namespace orange {

    void print(const char* text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}

int main()
{
    apple::print("Hello");

    using namespace apple;
    print("Hello");

    // 给名称空间起别名
    namespace a = apple;
    a::print("Hello");

    std::cin.get();
}