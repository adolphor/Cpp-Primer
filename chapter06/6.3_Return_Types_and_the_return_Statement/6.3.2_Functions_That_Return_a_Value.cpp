/**
 * 6.3.2 有返回值函数
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/10
 */

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

char &get_val(string &str, string::size_type ix);

int main() {
  /**
   * 1. 返回值类型要与函数要求的类型一致
   * 2. 或者能够隐式转换
   */

  /**
   * 不要返回局部对象的引用或指针：局部对象会在函数执行完毕之后销毁，意味着局部变量的引用将指向不再有效的内存区域。
   */

  /**
   * 引用返回左值：调用一个返回引用的函数得到左值，其它返回类型得到右值。
   */
  string s("a value");
  cout << s << endl; // 输出 a value
  get_val(s, 0) = 'A'; // 将 s[0] 赋值为 A，这里将函数返回值作为左值，因为返回值是一个引用类型
  cout << s << endl; // 输出 A value

  /**
   * 列表初始化返回值：TODO
   */

  /**
   * 主函数main的返回值
   */
  if (1 != 1)
    return EXIT_FAILURE; // 定义在 cstdlib 头文件中，既不能添加std，也不能在using声明
  else
    return EXIT_SUCCESS;
}

char &get_val(string &str, string::size_type ix) { // get_val 假定索引值是有效的
  return str[ix]; //
}

