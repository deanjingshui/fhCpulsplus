# 函数声明
在源文件a中声明函数f,在源文件b中定义函数f
那么，编译源文件a时不会失败，并在链接阶段去寻找函数f

# 错误：未解决的外部符号（unresolved external symbol）
连接器找不到它需要的符号

# 错误：重复的符号
> 
[ 33%] Building CXX object CMakeFiles/mutilply.dir/Multiply.cc.o
[ 66%] Building CXX object CMakeFiles/mutilply.dir/Log.cc.o
[100%] Linking CXX executable mutilply
duplicate symbol 'Log(char const*)' in:
    CMakeFiles/mutilply.dir/Multiply.cc.o
    CMakeFiles/mutilply.dir/Log.cc.o
ld: 1 duplicate symbol for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
>
重复的话，不止需要函数名相同，返回值和参数也要相同。即所谓的`签名`

## 避免重复的方法：使用static
staic即文件内的

## 避免重复的方法：使用inline
