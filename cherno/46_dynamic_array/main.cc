#include <iostream>
#include <string>
#include <vector>  // 需要

struct Vertex
{
    float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

// 传递数组，使用引用，可以确保没有把整个数组，复制到这个函数中
void Function(const std::vector<Vertex> vertices)
{

}

int main()
{
    std::vector<Vertex> vertices;  // 这里没有存储一堆vertex指针
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    // 遍历
    for (int i = 0; i < vertices.size(); i++)
        std::cout << vertices[i] << std::endl;
    // 使用range for
    for (Vertex v: vertices)  // 这实际是将每个vertex复制到这个for范围循环中。不好
        std::cout << v << std::endl;
    for (Vertex& v: vertices)  // 避免复制
        std::cout << v << std::endl;

    // 清空数组
    vertices.clear();  // 数组大小设回0

    // 将第二个元素删除
    vertices.erase(vertices.begin() + 1);

    // 传递数组
    Function(vertices);

    std::cin.get();
}