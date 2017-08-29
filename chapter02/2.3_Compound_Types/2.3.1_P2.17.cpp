/**
 * 练习 2.17
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/30
 */

#include <iostream>

int main() {
  int i, &ri = i; // i默认初始值为0？然后ri也为0？
  std::cout << i << " " << ri << std::endl;
  i = 5; // 都为5
  std::cout << i << " " << ri << std::endl;
  ri = 10; // 都为10
  std::cout << i << " " << ri << std::endl;
  return 0;
}

