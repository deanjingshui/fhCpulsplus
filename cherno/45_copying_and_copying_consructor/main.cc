#include <iostream>
#include <string>

struct Vector2
{
    float x, y;
};

class String
{
private:
    char* m_Buffer;  // 指向字符缓冲区
    unsigned int m_Size;  // 保存字符串的大小
public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];  // 字符串有一个空终止字符
        memcpy(m_Buffer, string, m_Size);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    // 我们不仅想复制指针，我们想复制指针所指向的内存；自己实现"拷贝构造函数"
    String(const String& other)
        : m_Size(other.m_Size)
    {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }


    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

int main()
{
    int a = 2;
    int b = a;  // 创建一个a的副本，a和b是两个独立的变量，它们有不同的内存地址
    b = 3;  // a仍然是2

    Vector2* a1 = new Vector2();
    Vector2* b1 = a1;  // 没有复制1实际的变量，复制的是指针

    String string = "Cherno";
    String second = string;
    second[2] = 'a';
    std::cout << string << std::endl;
    std::cout << second << std::endl;


    
}