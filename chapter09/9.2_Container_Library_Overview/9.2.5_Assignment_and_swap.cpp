/**
 * 9.2.5 赋值和swap
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/10
 */

#include <string>
#include <vector>
#include <iostream>
#include <list>

using std::string;
using std::vector;
using std::array;
using std::list;

using std::cout;
using std::endl;

int main() {
  /**
   * 赋值运算符将其左边容器中的全部元素替换为右边容器中元素的拷贝
   */
  vector<string> v1 = {"a", "an", "the"};
  vector<string> v2 = {"x", "y", "z", "plus"};
  v1 = v2; // c1的值变为 x,y,z,plus （即改变了内容又改变了长度大小）
  v1 = {"a", "b", "c"}; // c1的值变为a,b,c

  /**
   * 与内置数组不同，标准库array类型允许赋值
   */
  array<int, 10> a1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  array<int, 10> a2 = {0}; // 10个元素全部为0
  a1 = a2; // 替换a1中的元素

  /**
   * 使用assign（仅顺序容器）
   * assign允许我们从一个不同但是相容的类型赋值，或者从容器的一个子序列赋值。
   * assign操作用参数所指定的元素（的拷贝）替换左边容器中的所有元素。
   */
  list<string> names;
  vector<const char*> oldstyle;
  // names = oldstyle; // 错误：容器类型不匹配
  names.assign(oldstyle.cbegin(),oldstyle.cend()); // 将names的内容替换为oldstyle的内容

  list<string> slist(1);   // 1个元素，为空string
  slist.assign(10,"Hiya"); // 10个元素，每个都是 Hiya

  /**
   * 使用swap：交换两个相同类型容器的元素
   * 1. 元素本身并未交换，只是交换了两个容器的内部数据结构
   * 2. 元素不会移动的事实意味着，除string外，指向容器的迭代器、指针和引用在swap之后都不会失效
   * 3. 与其它容器不同，对一个string调用swap会导致迭代器、指针和引用失效
   * 4. 与其它容器不同，swap两个array，会真正交换他们的元素。所以所需时间与array中的元素数量成正比。
   */


  return 0;
}
