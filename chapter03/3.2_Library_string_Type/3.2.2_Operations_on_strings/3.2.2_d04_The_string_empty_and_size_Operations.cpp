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
  string line;
  while (getline(cin, line)) {
    if (line.empty()) { // 判断数据是否为空：
      cout << "此行数据为空" << endl;
    } else {
      unsigned long size = line.size();
      cout << "此行数据长度为：" << size << endl;
      if (size > 3) { // 输出字符长度大于3的字符串
        cout << "此行数据内容为：" << line << endl;
      }
    }
  }
  return 0;
}

