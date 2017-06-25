/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>

/**
 *  读取数量不定的输入数据，
 *  只有输入换行符(比如：\n)或者非法字符（非数字，但直接回车不会停止）的时候才会停止接收数据，输出运算结果
 *  @EOF EOF 是 end of file 的缩写，windows环境是：ctrl+Z，unix 环境是：ctrl+D，即可模拟（？）EOF
 */
int main(){
  std::cout << "【notQuantitativeValue】=> 请每次输入一个数据，并回车（想结束输入参数的时候输入 EOF 或者输入非数字字符即可）：" << std::endl;
  int sum = 0, value = 0;
  while (std::cin >> value) { // 使用istream对象作为条件，其效果是检测流的状态
    sum += value;
  }
  std::cout << "Sum is " << sum << std::endl;
  return 0;
}