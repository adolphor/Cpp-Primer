/**
 * 练习 2.20
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/29
 */

#include <iostream>

int main() {
  int i = 42; // 初始化int变量i为42
  int *p1 = &i; // 定义int型指针变量p1指向i
  *p1 = *p1 * *p1; // 赋值p1的值为其本身乘积
  std::cout << " p1 = " << *p1 << std::endl;
}
