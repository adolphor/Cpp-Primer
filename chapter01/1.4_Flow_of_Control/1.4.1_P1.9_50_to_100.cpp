/**
 * 练习 1.9
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/26
 */

#include <iostream>

int main() {
  int i = 50, sum = 0;
  while (i <= 100) {
    sum += i++;
  }
  std::cout << "Sum of 50 to 100 is " << sum << std::endl;
  return 0;
}
