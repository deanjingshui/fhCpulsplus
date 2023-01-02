# 头文件的作用
### 声明
声明函数的存在，以便在其他(也可能是多个)源文件中使用
编译器就不会报错，编译器就会相信该函数是存在的
### 头文件
利用`#include`的复制粘贴的作用，引入包含声明内容的头文件

# 头文件保护符
### #program once


### #ifndef
作用于proram类似，避免头文件被重复include
```c++
#ifndef _LOG_H
#define _LOG_H

void LOG(const* message);

#endif
```

# 头文件的扩展名
为了区分c++和c标准库，c++的标准库不用文件扩展名
例如
```c++
#include <iostream>
```
