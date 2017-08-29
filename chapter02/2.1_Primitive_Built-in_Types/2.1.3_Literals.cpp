/**
 * 2.1.3 字面值常量
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */

#include <iostream>

int main() {

  /**
   * 字面值常量：字面值常量的形式和值决定了它的数据类型
   */

  /**
   * 整形和浮点型字面值：
   * 十进制字面值的类型可选：int，long，long long 中可容纳其时最小的那个（带符号数）
   * 八进制 和 十六进制类型可选：int，unsigned int，long，unsigned long，longlong，unsigned long long 中可容纳其时最小的那个
   */

  // 三种数据类型表示 20：
  int a = 20;   // 10进制
  int b = 024;  // 8进制
  int c = 0x14; // 16进制

  std::cout << "20 => " << a;
  std::cout << "024 => " << b;
  std::cout << "0x14 => " << c;
  std::cout << std::endl;

  /**
   * 字符和字符串字面值，这个和Java一样~
   * 单引号 字符字面值
   * 双引号 字符串字面值
   */
  char d = 'd';
  std::cout << "我是字符串字面值，将要打印字符字面值：" << d << std::endl;

  /**
   * 转义序列，这个和Java一样，略啦~
   */

  /**
   * 指定字面值的类型：
   */
  L'a'; // 宽字符字面值，类型是wchar_t
  u8"hi"; // utf-8字符串字面值（utf-8用8位编码一个Unicode字符）
  42ULL; // 无符号整形字面值，类型是 unsigned long long
  1E-3F; // 单精度浮点型字面值，类型是fload
  3.14159L; // 扩展精度浮点型字面值，类型是long double

  /**
   * 布尔字面值 和 指针字面值：
   * 布尔值：true & false
   * 指针字面值：nullptr，参考2.3.2节
   */


  return 0;

}