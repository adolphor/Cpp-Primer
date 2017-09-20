/**
 * 9.5.1 构造string的其它方法
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/20
 */

#include <string>
#include <iostream>

using std::string;

using std::cout;
using std::endl;

int main() {
  /**
   * 构造函数
   */
  char arr[13]="hello world!";
  string s1(arr, 5);        // 数组：拷贝数组的前5个元素 => hello

  string test = "hello world!";
  string s2(test, 6);       // string：从下标为6的字符开始拷贝 => world!
  string s3(test, 6,5);    // string：从下标为6的字符开始拷贝，长度是5 => world

  cout << "test: " << test << endl;
  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;
  cout << "s3: " << s3 << endl;

  /**
   * substr操作
   */
  string ss("hello world");
  string ss2 = ss.substr(0, 5);
  string ss3 = ss.substr(6);
  string ss4 = ss.substr(6, 11);
  string ss5 = ss.substr(12);       // 运行时抛出一个out_of_range异常

  cout << "ss: " << ss << endl;
  cout << "ss2: " << ss2 << endl;
  cout << "ss3: " << ss3 << endl;
  cout << "ss4: " << ss4 << endl;
  cout << "ss5: " << ss5 << endl;

  return 0;
}
