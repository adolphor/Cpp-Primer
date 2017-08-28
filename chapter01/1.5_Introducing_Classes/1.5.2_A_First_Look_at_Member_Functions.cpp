/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */
#include <iostream>
#include "Sales_item.h"

/**
 * 成员函数（方法）是定义为类的一部分的函数，有时也被称为方法。
 * 点运算符 .
 * 调用运算符 （）
 */
int main() {
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  if (item1.isbn() == item2.isbn()) {
    std::cout << item1 + item2 << std::endl;
    return 0;
  } else {
    std::cout << "Data must refer to same ISBN" << std::endl;
    return -1;
  }
}