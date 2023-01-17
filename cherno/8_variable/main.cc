#include <iostream>

int main()
{
    int variable = 8;   // 一般是4个字节，带符号，范围是大约负的20亿至正的20亿

    unsigned int vu = 1;  // 无符号，范围是大约负的40亿至正的40亿
    char vc = 1;  // 1个字节，可以存储字符
    short vs = 1;  // 2个字节
    long vl = 1;  // 4个字节
    long long vll = 1;  // 8个字节

    float vf = 5.5f;  // 4个字节
    float vd = 5.5;   // 尾部没加f，则实际是个双精度类型
    double vdd = 5.5;   // 8个字节

    bool b = true;  // 占用1个字节，寻址无法单byte，只能寻址字节；0或1

    std::cout << sizeof(bool) << std::endl;
    std::cin.get();
}