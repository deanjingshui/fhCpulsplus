#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
    using namespace std::literals::chrono_literals;  // 为了下面的1s中的"s"

    while(!s_Finished)
    {
        std::cout << "Workin...\n";
        std::this_thread::sleep_for(1s);
    }
}

int main()
{
    std::thread worker(DoWork);  // 创建一个线程对象，给构造函数传入一个函数; 实例化该线程就开始执行！

    std::cin.get();
    s_Finished = true;

    worker.join();  // 等待这个线程加入进来，完成它的工作
    std::cout << "Finished." << std::endl;

    std::cin.get();
}