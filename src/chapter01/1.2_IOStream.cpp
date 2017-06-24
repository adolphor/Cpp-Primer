//
// Created by Bob on 2017/6/24.
//
#include <iostream>

int main() {
  std::cout << "Please enter to numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  // 顺序将输入值赋值到v1，v2，而且输入两个参数之后就自动往下运行
  std::cin >> v1 >> v2; // 不需要 std::endl
  std::cout << "The sum of " << v1 << " and " << v2
            << " is " << v1 + v2 << std::endl;
  return 0;
}
