/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>
#include "Sales_item.h"

/**
 * 知识点汇总范例
 * @return
 */
int main() {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item trans;
    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total += trans;
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  return 0;
}