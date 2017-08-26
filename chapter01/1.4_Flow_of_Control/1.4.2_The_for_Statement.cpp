/**
 * 1.4.2 for语句
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */

#include <iostream>

int main(){
  int sum = 0;
  for (int value = 0; value <= 10; ++value) {
    sum += value;
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}