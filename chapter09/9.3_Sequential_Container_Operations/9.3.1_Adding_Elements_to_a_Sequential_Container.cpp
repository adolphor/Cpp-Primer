/**
 * 9.3.1 向顺序容器添加元素
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/18
 */

#include <string>
#include <iostream>
#include <list>

using std::list;
using std::string;

using std::cin;
using std::cout;
using std::endl;

int main(){
  /**
   * 使用push_back：除了array和forward_list每个顺序容器都支持push_back，作用是将一个元素放入顺序容器尾部。
   * 当我们用一个对象来初始化容器，或将一个对象插入到容器中时，实际上放入到容器中的是对象值的拷贝，而不是对象本身。
   */

  /**
   * 使用push_front：此操作将元素插入到容器头部。
   */

  /**
   * 在容器中的特定位置插入元素：基本上可以间接实现push_front的效果。
   */

  /**
   * 插入范围内元素：TODO
   */

  /**
   * 使用insert返回值：可以在容器中一个特定位置反复插入元素
   */
  string word;
  list<string> 1st;
  auto iter = 1st.begin();
  while (cin >> word)
    iter = 1st.insert(iter, word);

  /**
   * 使用emplace操作：新标准引入了三个新成员，emplace_front,emplace 和 emplace_back，这些操作构造而不是拷贝函数。
   * 分别对应push_front,insert和push_back。
   * TODO：不是特别明白
   */
  return 0;
}
