/**
 * 3.2.2 string字符串上的操作：string的empty和size操作
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/18
 */

#include <string>
#include <iostream>

using std::string;

using std::cin;
using std::cout; using std::endl;

int main() {
  // 基本知识点
  string s1;
  string s2 = "";
  string s3("hello workd!");

  cout << "s1默认初始值是否为空：" << s1.empty() << endl;  // 默认初始值 empty 为真
  cout << "s2空字符串是否为空：" << s2.empty() << endl;    // 空字符串 empty 也为真
  cout << "s3字符串长度：" << s3.size() << endl;

  // 读取输入信息范例
  string line;
  while (getline(cin, line)) {
    if (line.empty()) { // 判断数据是否为空：
      cout << "此行数据为空" << endl;
    } else {
      unsigned long size = line.size(); // 注意，其实 size 函数返回的确切类型是 string::size_type，但不管怎样，是一个无符号整型数
      // 或者可以直接使用auto进行类型自动推断 auto size = line.size()
      cout << "此行数据长度为：" << size << endl;
      if (size > 3) { // 输出字符长度大于3的字符串
        cout << "此行数据内容为：" << line << endl;
      }
    }
  }
  return 0;
}

