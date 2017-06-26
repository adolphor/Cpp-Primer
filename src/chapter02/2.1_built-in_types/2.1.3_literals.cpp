/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>

/**
 * 字面值常量
 * @return
 */
int main() {

  // 1. 整形和浮点型字面值
  // 十进制字面值的类型可选：int，long，long long 中可容纳其时最小的那个（带符号数）
  // 十进制： 20
  // 八进制 和 十六进制类型可选：int，unsigned int，long，unsigned long，longlong，unsigned long long 中可容纳其时最小的那个
  // 八进制（0开头）：020
  // 十六进制（0x开头）：0x20
  int a = 20;
  int b = 020;
  int c = 0x20;

  std::cout
      << "十进制 20=" << a
      << "，\t八进制 020=" << b
      << "，\t16进制 0x20=" << c
      << std::endl;

  // 2. 字符和字符串字面值，这个和Java一样~
  // 单引号 字符字面值
  // 双引号 字符串字面值
  char d = 'd';
  std::cout << "我是字符串字面值，将要打印字符字面值：" << d << std::endl;

  // 3. 转义序列，这个和Java一样，略啦~

  // 4. 布尔字面值 和 指针字面值
  // 指针后面学习喽~

  return 0;

}