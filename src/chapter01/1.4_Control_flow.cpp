/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */
#include <iostream>

void while_Demo();

void for_Demo();

void notQuantitativeValue();

void if_Demo();

int main() {

  // 1.4.1 while
  while_Demo();
  // 1.4.2 for
  for_Demo();

  // 需要注意点是，1.4.3 和 1.4.4 不能同时运行，因为1.4.3结束输入的时候，1.4.4就不能接收到输入数据了

  // 1.4.3 读取数量不定的输入数据
  notQuantitativeValue();
  // 1.4.4 if语句
  if_Demo();


  std::cout << "Section 1.4 end" << std::endl;

  return 0;
}

/**
 * if语句，计算连续的相同数字的个数
 */
void if_Demo() {
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


}

/**
 *  读取数量不定的输入数据，
 *  只有输入换行符(比如：\n)或者非法字符（非数字，但直接回车不会停止）的时候才会停止接收数据，输出运算结果
 *  @EOF EOF 是 end of file 的缩写，windows环境是：ctrl+Z，unix 环境是：ctrl+D，即可模拟（？）EOF
 */
void notQuantitativeValue() {
  std::cout << "【notQuantitativeValue】=> 请每次输入一个数据，并回车（想结束输入参数的时候输入 EOF 或者输入非数字字符即可）：" << std::endl;
  int sum = 0, value = 0;
  while (std::cin >> value) { // 使用istream对象作为条件，其效果是检测流的状态
    sum += value;
  }
  std::cout << "Sum is " << sum << std::endl;
}

/**
 * for 语句 范例
 */
void for_Demo() {
  int sum = 0;
  for (int value = 0; value <= 10; ++value) {
    sum += value;
  }
  std::cout << "[for_Demo] => Sum of 1 to 10 inclusive is " << sum << std::endl;
}

/**
 * while 语句 范例
 */
void while_Demo() {
  int sum = 0, value = 1;
  while (value <= 10) {
    sum += value;
    ++value;
  } // 上面两句可以合并：sum += value++;
  std::cout << "[while_Demo] => Sum of 1 to 10 inclusive is " << sum << std::endl;
}



