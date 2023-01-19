#include <iostream>

int GetValue()
{
    return 11;  // 它是临时的，没有存储空间
}

int& GetValue_2()   // 这叫左值引用
{
    static int value = 12; // 那么我就需要为我的值提供某种存储空间，比如使用一个静态int,然后返回它
    return value;
}

void SetValue(int value)  // 我可以用左值或者右值来调用它
{
}

void SetValue_2(const int& value)  // 改成const 引用，就可接受左值和右值
{
}

void PrintName(std::string& name)
{
    std::cout << name << std::endl;
}

void PrintName_2(const std::string& name)
// 除了它是const之外，你不能从这个name字符串中窃取任何东西，因为它可能在很多函数中使用
{
    std::cout << name << std::endl;
}

// 写一个函数，只接受临时对象；右值引用
void PrintName_3(std::string&& name)  
// 如果知道传入的是一个临时对象的话，那么就不需要担心它们是否活着、是否完整、是否拷贝
// 我们可以简单地偷它的资源，给到特定的对象，或者其它地方使用它们，因为我们知道它是暂时的，它不会存在很长时间
{
    std::cout << name << std::endl;
}

int main()
{
    int i = 10;   // 变量i是一个在内存中有位置的实际变量；数字字面量10，没有存储空间
    10 = i;  // 不能给一个右值赋值
    int a = i;  // 等号右边就是右值的说法是不对的，i依然是一个左值

    // 右值不止是像10这样的字面量，它也可以是函数的结果 
    int b = GetValue();   // GetValue返回一个右值，返回一个临时值
    GetValue() = 11;   // 不能给一个右值赋值

    // 左值引用！！！
    GetValue_2() = 12;  

    int m = 10;
    SetValue(m);  // 调用SetValue，参数是一个左值
    SetValue(10);  // 调用SetValue，参数是一个临时变量右值

    // 另一个规则：你不能将右值赋给左值引用，左值引用的只能是左值
    int& j = 10;  // 不能
    const int& k = 10;  // 特殊：但是const 加上左值引用，就可以
    int temp = 10;      // 实际情况是，编译器会创建一个临时变量，然后把它赋给左值引用
    const int& q = temp;

    std::string firstName = "zhang";
    std::string lastName = "fei";
    std::string fullName = firstName + lastName;  // 由这2个组成一个临时字符串，然后它赋值给了一个左值
    PrintName(fullName);  // ok
    PrintName(firstName + lastName);  // 用这个表达式调用它，不能，因为这是右值
    // 这就是为什么你会看到很多C++写的常量引用，因为它们兼容临时的右值和实际存在的左值变量
    PrintName_2(firstName + lastName);
    PrintName_3(fullName);
    PrintName_3(firstName + lastName);
    // 有了右值引用，就有了一种方法来检测临时值，并对它们做一些特殊的事情

}