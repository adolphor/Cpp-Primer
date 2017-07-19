/**
 * 2.3.2 string字符串上的操作：string相加
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/19
 */
#include <string>
#include <iostream>

using std::string;
using std::cout;using std::endl;

int main() {
  /**
   * 两个string字符串相加：字符串拼接
   */
  string s1 = "hello";
  string s2 = "world";

  string s3 = s1 + s2;
  s3 += "!"; // 等价于 s3 = s3 + "!";
  cout << s1 << ", " << s3 << endl;

  /**
   * 字面值和string对象相加：因为某些历史原因，也为了与C兼容，字面值不能直接相加。
   */
  string s4 = s1 + " world!";
  string s5 = "hello" + s2;
  cout << s4 << ", " << s5 << endl;

  // string s6 = "hello" + "world!";  // 错误：字面值不能直接相加，因为字符串字面值与string是不同的类型，
  return 0;
}
