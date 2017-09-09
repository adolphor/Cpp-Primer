/**
 * 9.2.3 begin 和 end 成员
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/9
 */

#include <string>
#include <list>

using std::string;
using std::list;

int main() {
  /**
   * begin 和 end 操作生成指向容器中第一个元素和尾元素之后位置的迭代器。
   *
   * 当auto与begin和end结合使用时，获得的迭代器类型依赖于容器类型，与我们如何使用迭代器毫不相关。
   * 但以c开头的版本还是可以获得const_iterator，而不管容器的类型是什么。
   */
  list<string> a = {"Milton", "Shakespeare", "Austen"};
  auto it1 = a.begin(); // list<string>::iterator
  auto it2 = a.rbegin(); // list<string>::reverse_iterator
  auto it3 = a.cbegin(); // list<string>::const_iterator
  auto it4 = a.crbegin();// list<string>::const_reverse_iterator
  // 显示指定类型
  list<string>::iterator it5 = a.begin();
  list<string>::const_iterator it6 = a.begin();
  // 是 iterator 还是 const_iterator 依赖于a的类型
  auto it7 = a.begin(); // const_iterator only if a is const
  auto it8 = a.cbegin(); // it8 is const_iterator


  return 0;
}
