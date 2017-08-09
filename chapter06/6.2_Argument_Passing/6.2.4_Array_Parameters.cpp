/**
 * 6.2.4 数组形参
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/9
 */

#include <iostream>

/**
 * 数组引用形参：变量可以定义成数组的引用，同理，形参也可以是数组的引用。
 */
void print3(int (&arr)[10]);

using std::cout;
using std::endl;

int main() {
  /**
   * 先回顾数组的两个性质：
   * 1. 不允许拷贝数组
   * 2. 使用数组时，会将其转换为指针
   */

  /**
   * 数组形参和const：当不改变数组元素的时候定义成const即可
   */

  // 注意，传入的参数和函数定义的形参长度要相等。
  int k[10] = {0,1,2,3,4,5,6,7,8,9};
  print3(k);

  /**
   * 传递多维数组：TODO
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

/**
 * 数组引用形参：变量可以定义成数组的引用，同理，形参也可以是数组的引用。
 */
void print3(int (&arr)[10]){
  for (auto elem : arr)
    cout << elem << endl;
}