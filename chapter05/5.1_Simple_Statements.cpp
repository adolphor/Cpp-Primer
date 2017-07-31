/**
 * 5.1 简单语句
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/31
 */

#include <string>
#include <iostream>

using std::string;

using std::cin;
using std::cout; using std::endl;

int main() {
  /**
   * 表达式语句：一个表达式加上分号。执行完毕，并丢掉执行结果。
   */
  int ival = 0;
  ival + 5;
  cout << ival << endl;

  /**
   * 空语句：只有一个单独的分号。语法上需要一条语句，但逻辑上不需要的时候。
   */
  string s, sought;
  while (cin >> s && s != sought); // 如果发现了想要的值终止执行；否则等待下次输入。

  /**
   * 复合语句（块）：花括号括起来的内容部分。
   */
  int val = 0, sum = 0;
  while (val <= 10) {
    sum += val; // assigns sum + val to sum
    ++val; // add 1 to val }
  }

  return 0;

}
