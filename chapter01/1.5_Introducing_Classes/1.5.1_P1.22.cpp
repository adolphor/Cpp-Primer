/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */
#include <iostream>
#include "Sales_item.h"

/**
 * 练习 1.20
 * @return
 */
int main() {
  Sales_item book, count;
  std::cout << "请输入Book信息并回车：" << std::endl;
  while (std::cin >> book) {
    count += book;
    std::cout << "Book 信息为：" << count << std::endl;
  }
  return 0;
}