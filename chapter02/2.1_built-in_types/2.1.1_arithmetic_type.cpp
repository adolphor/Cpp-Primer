/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>

/**
 * 基本内置类型氛围两部分：
 * - 算数类型
 * - 空类型（void）
 * @return
 */
int main() {
  // 算数类型包括内容如下：
  bool a;
  char b;
  wchar_t c;
  char16_t d;
  char32_t e;
  short f;
  int g;
  long h;
  long long i;
  float j;
  double k;
  long double l;

  // 带符号类型 和 无符号类型
  // short，int，long，long long 都是有符号的，可在其之前添加 unsigned 关键字表示无符号类型，只能表示大于等于0的数据
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