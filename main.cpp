#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;


//    第二章：变量和基本类型
    // 符合类型：引用 & 指针
    std::cout << "==== 引用 ====" << std::endl;
    int ival = 1024;
    int &refVal = ival; // 为对象起了另外一个名字，使用符合 "&" 表示。Bob：那么，为什么要起别名？使用场景是什么？Java中有没有类似场景？
    // 注意以下四个打印结果的联系和区别
    std::cout << ival << std::endl;
    std::cout << refVal << std::endl;
    std::cout << &ival << std::endl; // "&" 在这里是作为 "取址符号"
    std::cout << &refVal << std::endl;

    std::cout << "==== 指针 ====" << std::endl;
    // 指针和引用不同的地方：指针本身就是一个对象，允许复制和拷贝。引用不是对象，没有实际的地址，所以不能定义指向引用的指针。
    int *p = &ival; // "&" 在这里是作为 "取址符号"，指向一个 int 型的数
    std::cout << p << std::endl; // 打印 ival 的地址
    std::cout << *p << std::endl; // "*" 在这里作为"解引用符"，获取到的就是指针指向的对象

    std::cout << "==== 指向指针的指针 ====" << std::endl;
    int **pp = &p; // pp 指向一个 int 型的指针  （Bob：话说，指针还分类型吗？）
    std::cout << **pp << std::endl;

    std::cout << "==== 指向指针的引用 ====" << std::endl;
    int *&r = p; // r 是一个对指针 pi 的引用（离变量名最近的符号对变量的类型有最直接的影响）
    // 因此 r 是一个引用，声明符的其余部分用以确定 r 引用的类型是什么，此例中的符号 * 说明 r 引用的是一个指针
    // 最后，声明的基本基本数据类型部分指出 r 引用的是一个 int 指针
    std::cout << *r << std::endl;

    std::cout << "==== const限定符 ====" << std::endl;
    const int bufSize = 512; // 相当于Java中的final关键字，初始化之后不能进行修改


    return 0;

}