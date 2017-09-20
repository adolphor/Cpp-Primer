/**
 * 9.5.5 数值转换
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/9/20
 */

#include <string>
#include <iostream>

using std::string;
using std::to_string;

using std::cout;
using std::endl;

int main() {

 /**
  * 其余函数参见书本列表
  */

  int i = 42;
  string s = to_string(i);
  double d = stod(s);

  cout << "s: " << s << endl;
  cout << "d: " << d << endl;

  string s2 = "pi = 3.14";
  d = stod(s2.substr(s2.find_first_of("+-.0123456789")));

  cout << "s2: " << s2 << endl;
  cout << "d: " << d << endl;

  return 0;
}
