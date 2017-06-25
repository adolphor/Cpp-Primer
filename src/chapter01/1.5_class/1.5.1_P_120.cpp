/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>
#include "Sales_item.h"

/**
 * 练习 1.22
 * 运行参数：0-201-X 5 88.88，0-201-X 4 11.11，……
 * @return
 */
int main() {
  Sales_item book;
  std::cout << "请输入Book信息并回车：" << std::endl;
  while (std::cin >> book) {
    std::cout << "当前 count 信息为：" << book << std::endl;
  }
  return 0;
}