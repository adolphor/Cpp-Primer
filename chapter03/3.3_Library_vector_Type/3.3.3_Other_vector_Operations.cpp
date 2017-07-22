/**
 * 3.3.3 其他vector操作
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/22
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cout; using std::endl;

int main() {

  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto &i:v) { // i 是一个引用
    i *= i;
  }
  for (auto i:v) {
    cout << i << " ";
  }
  cout << endl;

  cout << v.empty() << endl; // 是否为空
  cout << v.size() << endl;  // 长度

  vector<int>::size_type; // size_type 对应的对象 vector，总是包含着元素的类型，也就是int

  return 0;
}
