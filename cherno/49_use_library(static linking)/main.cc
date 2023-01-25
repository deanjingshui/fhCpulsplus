#include <iostream>
#include <GLFW/glfw3.h>  // 静态链接glfw，头文件

int main()
{
    int a = glfwInit();
    std::cout << a << std::endl;

    std::cin.get();
}