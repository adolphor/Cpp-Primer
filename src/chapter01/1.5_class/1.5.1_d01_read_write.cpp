/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>
#include "Sales_item.h" // 引入自定义的头文件不是 <>，而是 ""

/**
 * 类的输入和输出
 * 测试方法：运行时控制台输入"0-201-X 4 99.96 24.99" 回车即可
 * Q1. 每个参数各代表什么意思？
 * Q2. 传几个参数都行么？C++无需构造函数？
 * Q3. C++ 对象只需要声明，不需要初始化？
 * @return
 */
int main() {
  std::cout << "请输入book信息测试Sales_item类：" << std::endl;
  Sales_item book;
  // TODO 为什么能将空格分割的属性直接赋值到book对象？
  std::cin >> book;
  std::cout << book << std::endl;
  return 0;
}