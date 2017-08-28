/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */
#include <iostream>
#include "Sales_item.h" // 引入自定义的头文件不是 <>，而是 ""

/**
 * 类的输入和输出
 *
 */
int main() {


  // 范例1：运行时控制台输入"0-201-X 4 24.99" 回车即可
  std::cout << "请输入book信息测试Sales_item类：" << std::endl;
  Sales_item book;
  // TODO 为什么能将空格分割的属性直接赋值到book对象？
  std::cin >> book;
  std::cout << book << std::endl;


  // 范例2：输入两个参数，"0-201-X 3 20.00"，"0-201-X 2 30.00"
  std::cout << "请输入两个book信息测试相加：" << std::endl;
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  std::cout << item1 + item2 << std::endl; // 对象相加

  return 0;
}