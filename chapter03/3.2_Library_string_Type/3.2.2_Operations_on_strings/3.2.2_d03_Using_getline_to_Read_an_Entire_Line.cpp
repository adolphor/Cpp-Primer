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
  // 触发getline函数返回的那个换行符实际上被丢弃掉了，得到的line对象中并不包含换行符
  while (getline(cin, line)) { // 注意cin参数的传递
    cout << line << endl; // 同以前一样，使用endl结束当前行并刷新显示缓冲区
  }
  return 0;
}
