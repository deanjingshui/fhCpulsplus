#include <iostream>
#include <GLFW/glfw3.h>  // 头文件同时支持静态和动态链接

int main()
{
    int a = glfwInit();
    std::cout << a << std::endl;

    std::cin.get();
}