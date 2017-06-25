/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>
#include "Sales_item.h"

/**
 * 类对象相加
 * 测试方法：输入两个参数，"0-201-X 3 20.00"，"0-201-X 2 30.00"
 * @return
 */
int main() {
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  std::cout << item1 + item2 << std::endl;
  return 0;
}