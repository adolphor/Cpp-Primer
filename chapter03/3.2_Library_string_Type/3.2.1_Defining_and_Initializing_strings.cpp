/**
 * 3.2.1 定义和初始化string对象
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/18
 */

#include <string>
#include <iostream>

using std::string;
using std::cout; using std::endl;

int main(){
  /**
   * 标准库string是可变长的字符串序列，使用string类型必须包含string头文件。
   * 作为标准库的一部分，string定义在std命名空间中。
   */
  string s1; // 默认初始化，s1是一个空串
  string s2(s1); // s2 是 s1 的副本，等价于 string s2 = s1;
  string s3("value"); // s3是字面值"value"的副本，除了字面值最后的那个空字符外，等价于 string s3 = "value";
  string s4(10,'c'); // 把s4初始化为由连续10个字符c组成的串

  cout << "s1 => "<< s1 <<endl;
  cout << "s2 => "<< s2 <<endl;
  cout << "s3 => "<< s3 <<endl;
  cout << "s4 => "<< s4 <<endl;

  /**
   * 直接初始化 和 拷贝初始化
   */
  string s5 = "hiya"; // 拷贝初始化
  string s6("hiya");  // 直接初始化
  string s7(10,'c');  // 直接初始化，结果是 "cccccccccc"
  string s8 = string(10,'c'); // 拷贝初始化，右侧是一个显示创建的临时对象，等价于如下两条语句
  string temp(10,'c'); // 直接初始化
  string s9 = temp;    // 拷贝初始化

  cout << "s5 => "<< s5 <<endl;
  cout << "s6 => "<< s6 <<endl;
  cout << "s7 => "<< s7 <<endl;
  cout << "s8 => "<< s8 <<endl;
  cout << "s9 => "<< s9 <<endl;

  return 0;
}

