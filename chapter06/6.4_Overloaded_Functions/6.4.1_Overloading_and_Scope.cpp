/**
 * 6.4.1 重载与作用域
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/14
 */

#include <string>

using std::string;

int main() {

  /**
   * 不同作用域的函数不能重载，内层函数会忽略外层的同名函数。
   * TODO：编译没通过……
   */
  string read();
  void print(const string &);
  void print(double);
  void fooBar(int ival) {
    bool read = false; // 新作用域，隐藏了外层的read
    // string s = read(); // 错误：read是布尔值不是函数
    void print(int);
    // print("Value: "); // 错误：void print(const string &) 被隐藏掉了
    print(ival); // 正确
    print(3.14); // 正确，调用 void print(int)，隐式数据类型转换
  }

  return 0;
}
