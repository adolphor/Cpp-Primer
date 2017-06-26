/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>

/**
 * for 语句 范例
 */
int main(){
  int sum = 0;
  for (int value = 0; value <= 10; ++value) {
    sum += value;
  }
  std::cout << "[for_Demo] => Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}