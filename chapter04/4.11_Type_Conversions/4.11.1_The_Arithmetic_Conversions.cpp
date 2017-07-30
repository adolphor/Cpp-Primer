/**
 * 4.11.1 算数转换
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/30
 */

#include <iostream>

using std::cout; using std::endl;

int main() {

  // 隐式转换
  auto val = 3.1415l + 3;
  cout << val << endl; // val=6.1415，也就是3被自动转换为了3.0000l
  int ival = val;
  cout << ival << endl; // ival=6，也就是赋值给int类型的ival的时候，6.1415被舍弃了小数部分

  // 整型提升：将小整数类型转换为较大的整数类型
  // bool,char,signed char,unsigned char,short,unsigned short => int => unsigned int
  // wchar_t,wchar16_t,wchar32_t => int => unsigned int => long => unsigned long => long long = unsigned long long

  // 无符号类型的数据转换 TODO

  return 0;
}

