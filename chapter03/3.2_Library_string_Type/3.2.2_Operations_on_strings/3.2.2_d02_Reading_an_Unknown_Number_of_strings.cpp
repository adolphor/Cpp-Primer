/**
 * 3.2.2 string字符串上的操作：读取未知量的string对象
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/18
 */

#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;using std::endl;

int main() {
  string word;
  while (cin >> word) {   // 反复读取，直至文件末尾
    cout << word << endl; // 逐个输出
  }
  return 0;
}
