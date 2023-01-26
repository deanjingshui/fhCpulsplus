#include <iostream>
#include <string>

struct Vector3
{
    float x, y, z;

    Vector3()
        : x(10), y(11), z(12) {}
};

int main()
{
    // 整数
    int value = 5;  // 栈分配
    int* hvalue = new int;  // 需要new关键字来在堆上分配
    *hvalue = 5;  // 解引用

    // 数组
    int array[5];  // 栈分配
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    int* harray = new int[5];  // 堆分配
    harray[0] = 1;
    harray[1] = 2;
    harray[2] = 3;
    harray[3] = 4;
    harray[4] = 5;

    // 对象
    Vector3 vector;  // 栈分配
    Vector3* hvector = new Vector3();  // 堆分配, 圆括号是可选的

    // 堆需要手动释放内存
    delete hvalue;
    delete[] harray;
    delete hvector;
}