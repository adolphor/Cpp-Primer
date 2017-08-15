/**
 * 6.7 函数指针
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/15
 */

#include <string>

using std::string;

int main(){
  /**
   * 函数指针指向函数而非对象。和其他指针一样，函数指针指向某种特定类型。
   * 函数的类型由它的返回类型和形参类型决定，与函数名无关。
   *
   * 如下所示函数类型：bool(const string&, const string&)
   */
  bool lengthCompare(const string &, const string &);

  /**
   * 声明一个指向该函数的指针：
   * 1. pf前面有*，表示pf是个指针
   * 2. 右侧是形参列表，表示指向的是一个函数
   * 3. 左侧bool表示函数的返回类型是布尔类型
   * 4. 因此，pf是一个指向函数的指针
   */
  bool (*pf)(const string &, const string &);


  /**
   * 使用函数指针：当我们把函数名作为一个值使用时，该函数自动转换为指针。
   */
  pf = lengthCompare; // pf指向名为 lengthCompare 的函数
  pf = &lengthCompare; // 等价赋值语句，取地址符是可选的

  /**
   * 直接使用指向函数的指针调用函数，无需提前解引用指针
   */
  bool b1 = pf("hello", "goodbye"); // 调用 lengthCompare 函数
  bool b2 = (*pf)("hello", "goodbye"); // 一个等价调用
  bool b3 = lengthCompare("hello", "goodbye"); // 另一个等价调用

  /**
   * 重载函数的指针：指针类型必须与重载函数中的某一个精确匹配
   */
  void ff(int*);
  void ff(unsigned int);
  void (*pf1)(unsigned int) = ff;

  /**
   * 函数指针形参：TODO
   */

  /**
   * 返回指向函数的指针：TODO
   */

  /**
   * 将auto和decltype用于函数指针类型：TODO
   */


  return 0;
}
