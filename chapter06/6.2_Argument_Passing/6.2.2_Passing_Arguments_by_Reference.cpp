/**
 * 6.2.2 传引用参数
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/7
 */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

void reset(int &ir);

bool isShorter(const string &s1, const string &s2);

string::size_type find_char(const string &s, char c, string::size_type &occurs);

int main() {
  /**
   * 通过使用引用参数，允许函数改变一个或多个函数的值。
   */
  // 先复习下引用知识
  int n = 0, i = 42;
  int &r = n; // r绑定了n，即r是n的另一个名字
  r = 42; // 现在 n 的值是42
  r = i; // 现在 n 的值和i相同
  i = r; // i的值和 n 相同
  cout << "r=" << r << ", n=" << n << ", i=" << i << endl;

  // 引用范例
  reset(i);
  cout << "i=" << i << endl;

  /**
   * 使用引用避免拷贝：如果不对参数内容进行更改，可以将方法形参设置为对常量的引用
   */
  string s1 = "Hello", s2 = "world!";
  bool shorter = isShorter(s1, s2);
  cout << "isShorter: " << shorter << endl;

  /**
   * 使用引用形参返回额外信息：一个函数只能返回一个值，想要同时返回多个值，可以使用引用形参来实现。
   */
  string s = "hello, world!";
  string::size_type ctr; // Bob：无需初始化就可以当做参数参数锁调用的函数
  auto index = find_char(s, 'o', ctr);
  cout << "index result: " << index << endl;

  return 0;
}

void reset(int &ir) {
  ir = 0;
  cout << "ir = " << ir << endl;
}

bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c, string::size_type &occurs) { // occurs 是引用形参，可以改变参数值，无需函数返回
  auto ret = s.size();
  occurs = 0;
  for (decltype(ret) i = 0; i != s.size(); ++i) { // （Bob：decltype 原来是配合auto使用的）
    if (s[i] == c) {
      if (ret == s.size()) // 改过一次之后就不进行更改了
        ret = i;
      ++occurs; // 出现次数加1
    }
  }
  return ret;
}
