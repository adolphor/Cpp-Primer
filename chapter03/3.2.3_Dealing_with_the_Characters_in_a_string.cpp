/**
 * 3.2.3 处理string对象中的字符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/19
 */

#include <string>
#include <iostream>

using std::string;
using std::cout; using std::endl;

int main() {
  /**
   * 范围for语句（range for）：C++11 新标准，遍历序列中的元素
   */
  string str("some string");
  for (auto c:str) { // 自动推断数据类型为char
    cout << c << endl;
  }
  // 计算string的标点数
  string s("hello world!!!");
  decltype(s.size()) punct_cnt = 0;
  for (auto c : s) {
    if (ispunct(c)) {
      ++punct_cnt;
    }
  }

  /**
   * 使用范围for语句改变字符串中的字符
   */
  cout << punct_cnt << " punctuation characters in  " << s << endl;
  string t = "hello world!";
  for (auto &c : t) { // c是引用不是拷贝的值
    c = toupper(c); // 改变c的值就是改变t中的字符的值
  }
  cout << t << endl;

  /**
   * 使用下标（索引）获取 or 改变字符
   */
  if (!s.empty()) {
    cout << s[0] << endl; // 打印第一个字符
  }
  if (!s.empty()) {
    s[0] = toupper(s[0]); // 将第一个字符转为大写
    cout << s << endl;
  }
  /**
   * 使用下标执行迭代
   */
  for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index) {
    s[index] = toupper(s[index]);
  }
  cout << s << endl;

  for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index){
    s[index] = toupper(s[index]);
  }
  cout << s << endl;

  return 0;
}
