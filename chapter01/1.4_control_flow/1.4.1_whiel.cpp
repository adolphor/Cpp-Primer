/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>

/**
 * while 语句 范例
 */
int main(){
  int sum = 0, value = 1;
  while (value <= 10) {
    sum += value;
    ++value;
  } // 上面两句可以合并：sum += value++;
  std::cout << "[while_Demo] => Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}