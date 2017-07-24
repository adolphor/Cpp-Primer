/**
 * 3.4.1 使用迭代器
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/24
 */

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout; using std::endl;

int main() {
  vector<string> v;
  auto b = v.begin(), e = v.end(); // begin 获取指向第一个元素的迭代器，end获取尾元素下一个位置的迭代器；当vector为空时，两者相等

  // cout << b << endl;  // TODO 为什么不能打印b？

  cout << (b == e) << endl;

  /**
   * *iter 返回迭代器iter所指元素的引用
   * iter -> men 解引用iter，并获取该元素的名为mem成员，等价于（*iter).mem
   * ++iter 令iter指示容器中的下一个元素
   * --iter 令iter指示容器中的上一个元素
   * iter1 == iter2 如果两者指示的是同一个元素或者是同一个元素的尾后迭代器，则相等
   * iter1 != iter2 反之，不相等
   */
  string s("some string"); // string 和 vector一样，可以使用迭代器
  if (s.begin() != s.end()) {
    auto it = s.begin(); // 获取到it，这是拷贝还是引用？
    *it = toupper(*it); // 为什么获取到it之后，还可以定义 *it ？
    cout << "it=" << *it << endl;
  }
  cout << "s = " << s << endl;

  // 将迭代器从一个元素移动到另外一个元素
  for (auto it = s.begin(); it != s.end() & !isspace(*it); ++it) { // 依次处理直至结束或者遇到空白字符
    *it = toupper(*it);
  }
  cout << "s = " << s << endl;

  // 迭代器类型
  vector<int>::iterator it; // it 能读写 vector<int> 中的元素
  string::iterator it2; // it2 能读写 string 中的字符
  vector<int>::const_iterator it3; // it3 只能读元素不能写元素
  string::const_iterator it4; // it4 只能读字符，不能写字符

  // begin 和 end 运算符
  vector<int> v2;
  const vector<int> v3;
  auto it2 = v2.begin(); // it2 的类型是 vector<int>::iterator
  auto it3 = v3.begin(); // it3 的类型是 vector<int>::const_iterator

  // 为了便于获取到 const——iterator类型，C++11 引入了两个新函数
  auto it4 = v2.cbegin(); // it4 的类型是 vector<int>::const_iterator

  // 结合解引用和成员访问操作：iter -> men

  // 谨记：但凡使用了迭代器的循环体，都不要向迭代器所属的容器添加元素


  return 0;
}
