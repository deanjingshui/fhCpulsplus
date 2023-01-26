#include <iostream>
#include <string>

#define PR_DEBUG 0

#if PR_DEBUG == 1
#define LOG(x) std::cout << x << std::endl  // 带参数 
#else
#define LOG(x)  // 移除LOG(X)
#endif

int main()
{
    std::cin.get();
}