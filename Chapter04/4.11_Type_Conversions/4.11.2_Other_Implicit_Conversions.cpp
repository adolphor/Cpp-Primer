/**
 * 4.11.2 其他隐式类型转换
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/30
 */

#include <string>

using std::string;

int main() {
  /**
   * 除了算术转换之外，还有其他几种隐士类型转换
   */
  // 数组转换成指针：在大多数用到数组的表达式中，数组自动转换成指向数组首元素的指针
  int ia[10];
  int *ip = ia; // ia转换成指向数组首元素的指针

  // 指针的转换：
  // 常量整数值0或者字面值nullptr能转换成任意指针类型
  // 指向任意非常量的指针能转换为void*
  // 指向任意对象的指针能转换为const void*

  // 转换成为布尔类型：如果指针或者算术类型的值为0，则转换为false；否则转换为true

  // 转转成常量：允许将指向非常量类型的指针转换为指向相应常量类型的指针，对于引用来说也是如此。但是反过来不成立，因为不能删除底层const。
  int i;
  const int &j = i;  // 非常量转换成const int的引用
  const int *p = &i; // 非常量的地址转换成const的地址
  // int &r = j, *q = p; 错误：不允许const转换为非常量

  // 类类型定义的转换：由编译器执行，不过每次只能执行一次类类型的转换
  string str = "a value"; // 字符串字面值转换为string类型

  return 0;
}