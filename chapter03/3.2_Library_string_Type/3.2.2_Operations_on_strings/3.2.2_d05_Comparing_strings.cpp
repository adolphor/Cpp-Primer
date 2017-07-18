/**
 * 3.2.2 string字符串上的操作：比较string对象
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

  /**
   * 比较主要有如下几种：
   * 1. 等于：==，不等于：!=
   * 2. 大于以及小于：>, >=, <, <=
   */
  string str = "Hello";
  string phrase = "Hello World";
  string slang = "Hiya";
  string strLowerCase = "hello";

  cout << (str != phrase) << endl; // 字符串长度都不同，那么肯定不相等
  cout << (str < phrase) << endl;  // str是phrase的前半部分，所有字符都相同，那么较短的小于较长的string对象
  cout << (str < slang) << endl;   // 如果字符有不相同的部分，那么按照字典顺序进行比较
  cout << (phrase < slang) << endl;// 同上
  cout << (strLowerCase > str) << endl; // TODO 为什么小写的反而大呢？

  return 0;
}
