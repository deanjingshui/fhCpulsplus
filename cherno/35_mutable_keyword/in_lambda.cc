#include <iostream>
#include <string>

int main()
{
    int x = 8;
    auto f = [=]() mutable  // 可以改变通过值传递的变量
    {
        x++;
        std::cout << x << std::endl;
    };
    f();
    // x = 8 不会增加为9

    std::cin.get();
}
