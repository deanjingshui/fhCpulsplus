#include <iostream>
#include <string>

// 宏必须在一行。可使用反斜杠"\"实现多行,反斜杠是Enter键的转义。
// 不要再反斜杠后面打上空格,因为这样就会是对空格的转义，而不是换行
#define MAIN int main() \ 
{\
    std::cin.get(); \
}

MAIN