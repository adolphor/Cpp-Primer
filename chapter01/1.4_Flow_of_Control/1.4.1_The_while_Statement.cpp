/**
 * 1.4.1 while 语句
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */

#include <iostream>

int main() {
  int sum = 0, value = 1;
  while (value <= 10) {
    sum += value;
    ++value;
  } // 上面两句可以合并：sum += value++;
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}