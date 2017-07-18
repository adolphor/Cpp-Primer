/**
 * 3.2.2 string字符串上的操作：读写string对象
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/18
 */

#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;using std::endl;

/**
 * 测试数据：hello hello world!
 * @return
 */
int main() {
  string s1;  // 空字符串
  cin >> s1;  // 将字符串读入到s，遇到空白终止
  cout << s1 << endl; // 输出s

  string s2, s3;  // 空字符串
  cin >> s2 >> s3;  // 将字符串读入到s，遇到空白终止
  cout << s2 << s3 << endl; // 输出s

  return 0;

}
