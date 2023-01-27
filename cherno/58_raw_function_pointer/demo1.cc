#include <iostream>

void HelloWorld(int a)
{
    std::cout << "Hello World! Value: " << a << std::endl;
}

int main()
{
    auto function = HelloWorld; 
    function(8);
    
    typedef void(*HelloWorldFunction)(int);
    HelloWorldFunction function1 = HelloWorld;
    function1(8);


    std::cin.get();
}