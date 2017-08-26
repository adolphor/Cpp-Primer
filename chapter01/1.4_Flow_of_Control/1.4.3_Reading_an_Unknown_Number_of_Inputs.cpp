/**
 * 1.4.3 读取数量不定的输入数据
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/26
 */

#include <iostream>

/**
 *  读取数量不定的输入数据，
 *  只有输入换行符(比如：\n)或者非法字符（非数字，但直接回车不会停止）的时候才会停止接收数据，输出运算结果
 *  @EOF EOF 是 end of file 的缩写，windows环境是：ctrl+Z，unix 环境是：ctrl+D，即可模拟（？）EOF
 */
int main(){
  std::cout << "数量不定的输入数据：输入一系列整数（想结束输入参数的时候输入 EOF 或者输入非数字字符即可）：" << std::endl;
  int sum = 0, value = 0;
  // 在while循环中完成数据读取操作
  while (std::cin >> value) { // 只要cin读取成功就返回true，读取结束或者非法则返回false
    sum += value;
  }
  std::cout << "Sum is " << sum << std::endl;
  return 0;
}