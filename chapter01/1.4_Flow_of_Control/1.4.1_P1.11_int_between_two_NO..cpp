/**
 * 练习 1.11
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/26
 */

#include <iostream>

int main() {
  std::cout << "输入两个整数：" << std::endl;
  int i1 = 0, i2 = 0;
  std::cin >> i1 >> i2;
  std::cout << "这两个整数之间的所有整数如下：" << std::endl;
  while (i1 <= i2) {
    std::cout << i1++ << std::endl;
  }
  return 0;
}
