/**
 * 2.1.1 算术类型
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */
#include <iostream>

int main() {

  /**
   * 字符类型相关：
   * 一个char的空间应确保可以存放机器基本字符集中任意字符对应的数字值，也就是说，一个char的大小和一个机器字节一样。
   * 其他字符类型用于扩展字符集，如wchar_t, char16_t, char32_t。
   * wchar_t类型用于确保可以存放机器最大扩展字符集中的任意一个字符。
   * 类型char16_t、char32_t则为Unicode字符集服务。
   */
  // 算术类型包括内容分类：类型名称；// 含义，最小尺寸
  bool a; // 布尔类型，未定义
  char b; // 字符，8位
  wchar_t c; // 宽字符，16位
  char16_t d; // Unicode字符，16位
  char32_t e; // Unicode字符，32位
  short f; // short短整型，16位
  int g; // int整形，16位
  long h; // 长整形，32位
  long long i; // 长整形，64位
  float j; // 单精度浮点数，6位有效数字
  double k; // 双精度浮点数，10位有效数字
  long double l; // 扩展精度浮点数，10位有效数字

  /**
   * 带符号类型 和 无符号类型：
   * short，int，long，long long 都是有符号的，可在其之前添加 unsigned 关键字表示无符号类型，只能表示大于等于0的数据。
   * 但是，char 和 signed char 并不一样，char类型是否有符号与编译器实现有关。
   */
  unsigned short m;
  unsigned int n;
  unsigned long o;
  unsigned long long p;

  // 如何选择数据类型，遵循如下几个规则：
  // 1. 不可能为负值时，使用无符号类型
  // 2. 一般首选使用int执行整数运算
  // 3. 算术表达式中尽量不使用short参与运算，如果使用也要添加 singed 或者 unsigned 关键字，确保有符号或者无符号
  // 4. 浮点数运算首选double

  std::cout << "内置基本数据类型 ~" << std::endl;

  return 0;
}