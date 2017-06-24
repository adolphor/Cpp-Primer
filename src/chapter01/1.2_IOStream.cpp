#include <iostream>

/**
 * 输入和输出范例
 * 不同于C程序的printf直接打印
 *
 * - 四个IO对象：
 * -- cin 读作 see-in
 * -- cout 读作 see-out
 * -- ceeror 读作 see-error，用来输出警告和错误信息
 * -- clog 读作 see-log，用来输出程序运行时的一般性信息
 * @return
 * Created by Bob on 2017/6/24.
 */
int main() {
  std::cout << "Please enter to numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  // 顺序将输入值赋值到v1，v2，而且输入两个参数之后就自动往下运行
  std::cin >> v1 >> v2; // 不需要 std::endl
  std::cout << "The sum of " << v1 << " and " << v2
            << " is " << v1 + v2 << std::endl;
  return 0;
}
