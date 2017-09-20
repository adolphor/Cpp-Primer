/**
 * 9.3.3 删除元素
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/20
 */

#include <list>

using std::list;

int main() {

  list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  /**
   * pop_front 和 pop_back 成员函数：分别删除首元素和尾元素。
   */
  lst.pop_front();
  lst.pop_back();

  /**
   * 从容器内部删除一个元素：成员函数erase从容器中指定位置删除元素。
   */
  auto it = lst.begin();
  while (it != lst.end())
    if (*it % 2) // if the element is odd
      it = lst.erase(it); // erase this element
    else
      ++it;
  /**
   * 删除多个元素：接受一对迭代器的erase版本，可以删除一个范围内的元素。
   */
  lst.clear(); // 删除容器中所有元素
  lst.erase(lst.begin(), lst.end()); // 等价调用

  return 0;
}