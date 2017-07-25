/**
 * 3.5.2 访问数组元素
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/25
 */

#include <iostream>

using std::cout; using std::endl;

int main() {
  /**
   * 数组除了大小固定之外，与vector用法基本类似。
   */
  // 使用for语句
  int scores[10] = {90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
  for (auto i:scores) { // auto 推断出来的类型是 size_t，其范围足够大且与机器无关
    cout << i << " ";
  }
  cout << endl;

  // 使用下标
  for (size_t j = 0; j < 10; ++j) {
    cout << scores[j] << " ";
  }
  cout << endl;

  return 0;
}
