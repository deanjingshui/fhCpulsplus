#include <iostream>
#include <string>

int main()
{
    const int MAX_AGE = 90;

    // 指针
    int* a = new int;  // 在堆上创建这个整数，这样我们就能得到一个指针
    *a = 2;
    a = (int*)&MAX_AGE;
    std::cout << *a << std::endl;

    // 方式1
    const int* a2 = new int;  // 不能修改该指针指向的内容；可改变指针本身
    // int const* a2 = new int;  // 也可以这样写
    *a2 = 2;  // 不能
    a = (int*)&MAX_AGE;
    
    // 方式2， const放在*后
    int* const a3 = new int;  // 正好相反；可改变指针指向的内容；不能把实际的指针本身重新赋值，指向别的东西
    *a3 = 2;
    a3 = (int*)&MAX_AGE;  // 不能

    // 两个const
    const int* const a4 = new int;
    *a4 = 2;  // 不能
    a4 = (int*)&MAX_AGE;  // 不能

}