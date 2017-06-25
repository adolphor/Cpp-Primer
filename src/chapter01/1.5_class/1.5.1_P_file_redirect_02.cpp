#include <iostream>
#include "Sales_item.h"

/**
 * 文件重定向测试：
 * 1. 跟 "1.5.1_P_file_redirect_01.cpp" 一样的逻辑，只是将一个参数换为两个
 * 2. 参数文件内容（换行分隔）：0-201-X 3 20.00，0-201-X 2 30.00
 * 3. ./a.out <1.5.1_P_file_redirect_02.md > 1.5.1_P_file_redirect_02_result.md
 * @return
 */
int main() {
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  std::cout << item1 + item2 << std::endl;
  return 0;
}