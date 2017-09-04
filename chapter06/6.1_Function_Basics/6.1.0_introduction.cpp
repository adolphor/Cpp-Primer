/**
 * 6.1 函数基础
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/4
 */

#include <iostream>

using std::cout;
using std::endl;

int fact(int val) {
    int temp = 1;
    while (val > 1) {
        temp *= val--;
    }
    return temp; // 返回return中的值（如果有的话）；并将控制权从被调用函数返回给主调用函数
}

int main() {
    /**
     * 函数组成：返回类型，函数名称，0个或多个形参，函数体
     * 调用运算符：一对圆括号，它用作于一个表达式，该表达式是函数或者指向函数的指针。
     */

    // 函数调用完成两项工作：1.用实参初始化函数对应的形参，2.将控制权转移给被调用函数
    // 执行函数的第一步是：（隐式地）定义并初始化它的形参，当调用函数时，先初始化一个名为val的int变量，然后将它初始化为调用时所用的实参5
    int j = fact(5);
    cout << "5! = " << j << endl;

    /**
     * 形参和实参
     * 实参是形参的初始值，实参和形参存在依次的对应关系，但并没有规定实参的求值顺序
     */

    return 0;
}
