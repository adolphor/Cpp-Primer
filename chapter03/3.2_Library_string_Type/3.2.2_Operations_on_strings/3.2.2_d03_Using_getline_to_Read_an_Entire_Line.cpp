/**
 * 3.2.2 string字符串上的操作：使用getline读取一整行
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/18
 */

#include <iostream>

using std::string;

using std::cin;
using std::cout; using std::endl;

int main() {
  string line;
  while (getline(cin, line)) { // 注意cin参数的传递
    cout << line << endl;
  }
  return 0;
}
