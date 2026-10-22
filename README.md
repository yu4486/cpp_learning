# C++ 学习记录

这个仓库用于记录 C++ 的学习过程，按学习天数和主题整理示例程序与笔记。每个学习目录包含对应的源码和说明，方便编译运行、理解代码和后续复习。

## 学习目录

| 目录 | 学习主题 | 主要内容 |
| --- | --- | --- |
| [day02_vector](day02_vector/README.md) | `std::vector` 动态数组 | 创建容器、添加元素、获取元素数量、遍历并输出 |

## 项目结构

```text
cpp_learning/
├── README.md                 # 项目总体说明
├── .gitignore                # Git 文件忽略规则
├── .vscode/
│   └── tasks.json            # VS Code 编译任务
└── day02_vector/
    ├── README.md             # 当天的学习说明
    └── vector_demo.cpp       # vector 示例程序
```

## 编译与运行

需要安装支持 C++11 或更新标准的 C++ 编译器。以下示例使用 Linux 终端中的 `g++`。

在项目根目录执行：

```bash
mkdir -p build
g++ -std=c++11 -Wall -Wextra -pedantic day02_vector/vector_demo.cpp -o build/vector_demo
./build/vector_demo
```

编译产物统一放在 `build/` 目录中，该目录已由 `.gitignore` 忽略。

使用 VS Code 时，也可以打开对应的 `.cpp` 文件，按 `Ctrl+Shift+B` 运行默认编译任务。现有任务会在源码所在目录生成同名可执行文件。

## 学习方式

1. 阅读对应目录中的 README，了解示例目标和知识点。
2. 查看源码，理清程序的执行顺序。
3. 编译运行，对照说明中的预期输出。
4. 修改示例中的数据，观察结果并记录自己的理解。

后续新增练习时，可以继续使用 `dayXX_主题/` 的目录形式，并在上方学习目录中补充链接。
