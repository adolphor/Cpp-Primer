/**
 * 1.4.4 if语句
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */
#include <iostream>

/**
 * if语句，计算连续的相同数字的个数
 */
int main() {
  std::cout << "if语句，计算连续的相同数字的个数：" << std::endl;
  int currVal = 0, val = 0;
  if (std::cin >> currVal) { // 先接收第一个参数，赋值
    int cnt = 1;
    while (std::cin >> val) { // 再遍历其余数据
      if (val == currVal) {
        ++cnt;
      } else {
        std::cout << currVal << " occurs " << cnt << " times." << std::endl;
        currVal = val; // 不置空，直接设置为下一个需要比对的值
        cnt = 1;
      }
    } // while 结束
    std::cout << currVal << " occurs " << cnt << " times." << std::endl;
  } // if 结束
  return 0;
}