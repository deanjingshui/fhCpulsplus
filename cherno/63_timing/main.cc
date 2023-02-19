#include <iostream>
#include <chrono>
#include <thread>

struct Timer   // 进行计时并自动打印;利用生命周期，只需要在函数的开头创建对象
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> durarion;

    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        durarion = end - start;

        float ms = durarion.count() * 1000.0f;
        std::cout << "Timer tool" << ms << "ms" << std::endl;
    }
};

void Function()
{
    Timer timer;

    for(int i = 0; i < 100; i++)
        std::cout << "Hello" << std::endl;
}

int main()
{
    using namespace std::literals::chrono_literals;

    auto start = std::chrono::high_resolution_clock::now();  // 当前时间;由于返回值的类型太长，这里使用了auto
    std::this_thread::sleep_for(1s);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    std::cout << duration.count() << "s " << std::endl;

    // 更聪明的方式，创建一个Timer
    Function();

    std::cin.get();
}