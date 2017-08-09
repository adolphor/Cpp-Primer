/**
 * 6.2.4 数组形参
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/9
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  /**
   * 先回顾数组的两个性质：
   * 1. 不允许拷贝数组
   * 2. 使用数组时，会将其转换为指针
   */
  return 0;
}

/**
* 使用标准库规范
*/
void print1(const int *beg, const int *end) {
  while (beg != end)
    cout << *beg++ << endl;
}

/**
 * 显示传递一个表示数组大小的形参
 */
void print2(const int ia[], size_t size) {
  for (size_t i = 0; i != size; ++i) {
    cout << ia[i] << endl;
  }
}
