/**
 * 4.7 条件运算符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/28
 */

#include <string>
#include <iostream>

using std::string;

using std::cout; using std::endl;

int main(){
  /**
   * 条件运算符：cond?expr1:expr2
   */

  int grade = 88;
  string finalgrade = (grade < 60) ? "fail" : "pass";
  cout << finalgrade << endl;

  // 嵌套条件运算符
  finalgrade = (grade > 90) ? "high pass"
                            : (grade < 60) ? "fail" : "pass";
  cout << finalgrade << endl;

  // 在输出表达式中使用条件运算符
  cout << ((grade < 60) ? "fail" : "pass"); // 输出fail或者pass

  cout << (grade < 60) ? "fail" : "pass"; // 输出0或1，等价于下面两句语句
  cout << (grade < 60);
  cout ? "fail" : "pass";

  return 0;
}

