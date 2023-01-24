#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z)
    {
    }

    // 拷贝构造函数。用于查看复制情况
    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied!" << std::endl;
    }
};

int main()
{
    std::vector<Vertex> vertices;
    vertices.push_back(Vertex(1, 2, 3));
    vertices.push_back(Vertex(4, 5, 6));
    vertices.push_back(Vertex(7, 8, 9));
    // 实际发生了多少次复制, 6次

    // 优化
    std::vector<Vertex> vertices1;
    vertices1.reserve(3);
    vertices1.emplace_back(1, 2, 3);
    vertices1.emplace_back(4, 5, 6);
    vertices1.emplace_back(7, 8, 9);


    std::cin.get();
}
