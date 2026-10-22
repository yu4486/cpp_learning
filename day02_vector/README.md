# Day02：vector 基础练习

本次练习通过一个速度数据示例，学习如何使用 `std::vector` 保存多个数值、添加元素，以及遍历容器中的数据。

源码：[vector_demo.cpp](vector_demo.cpp)

## 程序做了什么

1. 创建一个名为 `speeds` 的 `std::vector<double>`，初始为空。
2. 依次添加 `10.0`、`12.5` 和 `15.0` 三个数值。
3. 输出当前的元素数量。
4. 使用范围 `for` 循环，逐行输出每个元素。

## 主要知识点

### 1. 创建 vector

```cpp
std::vector<double> speeds;
```

使用 `vector` 需要包含头文件 `<vector>`。`double` 表示这个容器保存双精度浮点数；`vector` 可以随着元素的添加自动扩展存储空间。

### 2. 在末尾添加元素

```cpp
speeds.push_back(10.0);
```

`push_back()` 将一个新元素添加到容器末尾。本程序依次调用三次，因此元素按 `10.0`、`12.5`、`15.0` 的顺序保存。

### 3. 获取元素数量

```cpp
speeds.size()
```

`size()` 返回容器中当前的元素个数。添加三个元素后，结果为 `3`。

### 4. 使用范围 for 循环遍历

```cpp
for (double speed : speeds)
{
    std::cout << speed << std::endl;
}
```

每轮循环会把当前元素的值复制到变量 `speed`，再输出该值。范围 `for` 是 C++11 引入的语法，因此编译时需要使用 C++11 或更新标准。

## 编译与运行

以下命令在 **cpp_learning 项目根目录** 执行：

```bash
mkdir -p build
g++ -std=c++11 -Wall -Wextra -pedantic day02_vector/vector_demo.cpp -o build/vector_demo
./build/vector_demo
```

如果终端当前位于 `day02_vector/` 中，先执行 `cd ..` 返回项目根目录。

## 预期输出

```text
元素数量：3
10
12.5
15
```

`std::cout` 默认不会强制保留小数位，所以 `10.0` 和 `15.0` 会显示为 `10` 和 `15`。

## 可以继续尝试的练习

- 再添加一个速度值，观察 `size()` 和输出的变化。
- 暂时去掉三次 `push_back()`，观察空容器的元素数量和循环行为。
- 在循环中累加所有速度，计算总和与平均值；计算平均值前先判断容器是否为空。

[返回项目说明](../README.md)
