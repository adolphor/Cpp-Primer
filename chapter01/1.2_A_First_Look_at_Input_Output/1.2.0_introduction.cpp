/**
 * 1.2 初识输入输出
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/24
 */

#include <iostream>

/**
 * 标准输入输出对象，本节介绍四个IO对象：
 * -- cin 读作 see-in
 * -- cout 读作 see-out
 * -- ceeror 读作 see-error，用来输出警告和错误信息
 * -- clog 读作 see-log，用来输出程序运行时的一般性信息
 */
int main() {

  /**
   * 一个使用IO库的程序
   */
  std::cout << "Please enter to numbers:"  // 命名空间 std，作用域运算符 ::
            << std::endl; // << 输出运算符
  // 等价于下面两句：
  // std::cout << "Please enter to numbers:";
  // std::cout << std::endl;

  int v1 = 0, v2 = 0;
  // 顺序将输入值赋值到v1，v2，而且输入两个参数之后回车就自动往下运行（或者每输入一个数字回车一次）
  std::cin >> v1 >> v2; // >> 输入运算符
  // 等价于下面两句
  // std::cin >> v1;
  // std::cin >> v2;

  std::cout << "The sum of " << v1 << " and " << v2
            << " is " << v1 + v2 << std::endl;
  return 0;
}
