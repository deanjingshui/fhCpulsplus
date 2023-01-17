#include <iostream>

// int A = 0;
// int B = 1;
// int C = 2;

enum Example : unsigned char  // 可以指定整数的类型
{
    A, B, C
};

int main()
{
    Example value = B;

    if (value == 1)
    {
        // Do something here
    }

    std::cin.get();
}