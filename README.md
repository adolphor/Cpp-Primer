# C++ Primer, 5th Edition

* 本项目主要是《C++ Primer（第五版）》读书笔记，以及代码范例
* 代码按照章节进行了目录分类
* 个人使用了Clion作为本项目的IDE，但编译和运行使用命令行的方式进行
    - 使用Clion这个IDE的时候，在 `chapterXx` 右键选择"Mark Directory As"中的source即可高亮文件夹了。
* 编译命令  
    ```
    g++ fileName.cpp -std=c++11
    ```
* 运行    
    ```
    ./a.out
    ```
* 当前 macOS `版本 10.12.5 (16F73)` 默认不支持 C++11 新特性，有些文件编译的时候需要加上 `-std=c++11` 参数才能支持C++11

# expect 自动运行

* 如果安装了`expect`可以直接执行每个章节下的`run.sh`文件，来批量执行每个程序查看运行效果，
* 要注意脚本文件具有执行权限，没有权限时需要进行赋权：
    ```
    chmod +x chapterXx.sh
    chmod +x run.sh
    ```
* 因为expect用的不是bash所以 `sh run.sh` 会报错，执行的时候直接 `./run.sh` 就可以了。～切记！

# 目录

* 1、[开始](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter01)
* 第一部分 C++ 基础
    - 2、[变量和基本类型](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter02)
    - 3、[字符串、向量和数组](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter03)
    - 4、[表达式](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter04)
    - 5、[语句](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter05)
    - 6、[函数](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter06)
    - 7、[类](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter07)
* 第二部分 C++ 标准库
    - 8、[IO库](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter08)
    - 9、[顺序容器](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter09)
    - 10、[泛型算法](https://github.com/NorthFacing/Cpp-Primer/tree/master/chapter10)
    - 11、关联容器
    - 12、动态内存
* 第三部分 类设计者的工具
    - 13、拷贝控制
    - 14、重载运算与类型转换
    - 15、面向对象程序设计
    - 16、模板与泛型编程
* 第四部分 高级主体
    - 17、标准库特殊设施
    - 18、用于大型程序的工具
    - 19、特殊工具与技术


# 参考

* [官方源码](http://www.informit.com/store/c-plus-plus-primer-9780321714114)
* [课后习题解答](https://github.com/Mooophy/Cpp-Primer)

# 其他

### 文件命名方式

* 1.1.0_introduction.cpp 一般文件命名
* 1.5.1_d01_read_write.cpp 一节多个范例
* 1.5.1_P_120.cpp 课后习题


### 其他资料

* [C++ 基础教程](http://www.prglab.com/cms/)