/**
 * 10.1 概述
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/20
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
  /**
   * 大多数算法并不直接操作容器，而是遍历由两个迭代器指定的一个元素范围来进行操作。
   * 迭代器令算法不依赖于容器，但算法依赖于元素类型的操作。
   * 算法永远不会执行容器的操作：可以改变或者移动元素，但永远不会改变容器的大小。
   */
  int val = 42;// 要查找的元素,类型要与vector<>类型一致

  vector<int> vec;
  for (int i = 0; i < 10; i++) {
    vec.push_back(i * i);
  }

  auto iter = std::find(vec.begin(), vec.end(), val);// 返回的是一个迭代器指针，类型是 vector<int>::iterator

  if (iter == vec.end())
    cout << "ERROR!" << endl;
  else               // 注意迭代器指针输出元素的方式和distance用法
    cout << "the index of value " << (*iter) << " is " << std::distance(vec.begin(), iter) << std::endl;
  return 0;

}
