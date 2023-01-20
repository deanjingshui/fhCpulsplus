#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
    if (s_Level > 5)
        s_Speed = 10;
    else
        s_Speed = 5;
    s_Speed = s_Level > 5 ? 10 : 5;

    std::string rank = s_Level > 10 ? "Master" : "Beginner";  // 不需要想下面的方式(为初始化变量临时创建一个值),性能更好
    std::string otherRank;
    if (s_Level > 10)
        otherRank = "Master";
    else
        otherRank = "Beginner";

    // 嵌套
    s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;

    std::cin.get();
}