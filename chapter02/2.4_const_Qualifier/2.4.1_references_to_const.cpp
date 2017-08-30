/**
 * 2.4.1 const的引用
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/6
 */

#include <iostream>

int main() {

  /**
   * 可以把引用绑定到const对象上，就像绑定到其他对象上一样，我们称之为对常量的引用。
   * 因为引用一旦初始化之后不能绑定到别的对象，但是可以修改它所指定的对象的值。
   * 但是，对常量的引用不能被用作修改它所绑定的对象。
   */

  // 引用初始化之后不能被修改，而常量引用既可以指向常量，又可以指向非常量。
  int i = 42;
  int &r1 = i; // 引用r1绑定对象i
  const int &i2 = i; // r2也绑定对象i，但是不允许通过r2修改i的值；const引用可以指向非const变量，但是非const引用不能指向const变量
  std::cout << "i = " << i << std::endl;
  std::cout << "&r1 = " << &r1 << std::endl;
  std::cout << "r1 = " << r1 << std::endl;
  std::cout << "&i2 = " << &i2 << std::endl;
  r1 = 0; // r1 并非常量，i的值修改为0
  // r2 = 0; // 错误：r2 是一个常量引用
  std::cout << "r1 = " << r1 << std::endl;

  return 0;
}
