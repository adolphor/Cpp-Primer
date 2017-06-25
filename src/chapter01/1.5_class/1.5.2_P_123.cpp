/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>
#include "../Sales_item.h"

/**
 * 练习 1.23
 * 参考：1.4_Control_flow.cpp 中的 if_Demo 方法
 * @return
 */
int main() {
  Sales_item currVal, book;
  if (std::cin >> currVal) {
    int cnt = 1;
    while (std::cin >> book) {
      if (book.isbn() == currVal.isbn()) {
        ++cnt;
      } else {
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
        currVal = book;
        cnt = 1;
      }
    }
    std::cout << currVal << " occurs " << cnt << " times " << std::endl;
  }
  return 0;
}