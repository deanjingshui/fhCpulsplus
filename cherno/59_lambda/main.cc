#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// 希望能将一个函数传递给一个api

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)  // 
{
    for (int value : values)
        func(value);
}

int main()
{
    std::vector<int> values = { 1, 2, 3};
    
    int a = 5;

    auto lambda = [=](int value) { std::cout << "Value: " << a << std::endl; };  // [=] 拷贝(传入)了变量a

    ForEach(values, lambda);  //

    std::cin.get();
}