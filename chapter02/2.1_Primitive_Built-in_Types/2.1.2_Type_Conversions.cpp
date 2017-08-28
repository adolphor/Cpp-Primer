/**
 * 2.1.2 类型转换
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */

#include <iostream>

int main() {

  /**
   * 基本数据类型转换规则基本上和Java中规则一致；
   * 切勿混用有符号类型和无符号类型
   */
  bool b = 42; // 0 为 false，其余为 true
  int i = b; // 布尔值赋值给非布尔值，false 为 0，true 为 1
  i = 3.14; // 浮点数赋值给整数，取整；虽然编译通过，但是会有警告
  double pi = i; // 整数赋值给浮点数，自动补0
  unsigned char c = -1; // 假设char占8字节，c的值为255：无符号类型超出，取模之后赋值
  signed char c2 = 256; // 有符号类型，超出范围，结果是未定义的（undefined），可能继续工作也可能崩溃

  std::cout << "b = " << b << "\n";
  std::cout << "i = " << i << "\n";
  std::cout << "pi = " << pi << "\n";
  std::cout << "c = " << c << "\n"; // 很大的可能是乱码
  std::cout << "c2 = " << c2 << "\n"; // 未定义，打印出来的结果是空
  std::cout << std::endl;

  // 无符号数和整数 算数运算规则：
  unsigned u = 10;
  int it = -42;
  std::cout << "it + it = " << it + it << std::endl; // 无符号数，结果正常输出 -84
  std::cout << "u + it = " << u + it << std::endl; // 有符号和无符号相加：相加前先把整数-42转换为无符号数，结果是这个负数跟无符号数模的和

  // 无符号数减去一个值时，不管是不是无符号数，结果都不能为负数
  unsigned u1 = 42, u2 = 10;
  std::cout << "u1 - u2 = " << u1 - u2 << std::endl; // 输出32
  std::cout << "u2 - u1 = " << u2 - u1 << std::endl; // 输出取模之后的值

  return 0;
}