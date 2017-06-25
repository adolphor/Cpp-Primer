# C++ Primer, 5th Edition

* 本项目主要是《C++ Primer（第五版）》读书笔记，以及代码范例
* 代码按照章节进行了目录分类
* 个人使用了Clion作为本项目的IDE，但编译和运行使用命令行的方式进行
    - 使用Clion这个IDE的时候，在src右键选择"Mark Directory As"中的source即可高亮文件夹了。
* 编译命令  
    ```
    g++ fileName.cpp
    ```
* 运行    
    ```
    ./a.out
    ```
* expect 自动运行
    - 如果安装了`expect`可以直接执行每个章节下的`run.sh`文件，来批量执行每个程序查看运行效果，
    - 要注意脚本文件具有执行权限，没有权限是运行`chmod +x run.sh`赋权。
    - 因为expect用的不是bash所以 `sh run.sh` 会报错，执行的时候直接 `./run.sh` 就可以了。～切记！

# 参考

* [官方源码](http://www.informit.com/store/c-plus-plus-primer-9780321714114)
* [课后习题解答](https://github.com/Mooophy/Cpp-Primer)