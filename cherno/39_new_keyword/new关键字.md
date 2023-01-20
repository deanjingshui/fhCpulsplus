## new关键字
new的主要目的是在堆上分配内存

## 工作原理
根据类型找到一块连续的内存空间，然后返回指向给你的分配内存的指针

new是一个操作符
![image](./Snipaste_2023-01-20_14-28-21.png)

## delete关键字
也是一个操作符
![image](Snipaste_2023-01-20_14-36-36.png)
delete alse calls the destructor
