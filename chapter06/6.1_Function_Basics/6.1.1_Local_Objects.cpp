/**
 * 6.1.1 局部对象
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/2
 */

#include <cstddef>
#include <iostream>

using std::size_t;
using std::cout;
using std::endl;

size_t count_calls();

size_t static_count_calls();

int main() {

  /**
   * 自动对象：只存在于块执行区间的对象。比如，方法的形参，以及方法中定义的局部变量。
   */
  for (size_t i = 0; i != 10; ++i)
    cout << count_calls() << endl;

  /**
   * 局部静态对象：将局部变量定义成static类型从而获得这样的对象。第一次执行时进行初始化，一直到程序终止时才被销毁。
   */
  for (size_t i = 0; i != 10; ++i)
    cout << static_count_calls() << endl;

  return 0;
}

size_t count_calls() {
  size_t ctr1 = 0; // value will persist across calls
  return ++ctr1;
}

size_t static_count_calls() {
  static size_t ctr2 = 0; // value will persist across calls
  return ++ctr2;
}
