/**
 * 2.2.1 变量定义
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/6/28
 */

double applyDiscount(double price, double discount);

#include <iostream>

int main() {

  /**
   * 初始化不是赋值，
   * 初始化的含义是创建变量时赋予其中一个初始值，
   * 而赋值的含义是把对象的当前值擦除，而以一个新值来替代。
   */

  // 1. 初始值
  // price 先被定义并赋值，随后被用于初始化discount
  double price = 109.99, discount = price * 0.16;
  // 调用函数applyDiscount，然后用函数的返回值初始化 salePrice
  double salePrie = applyDiscount(price, discount);
  std::cout << "SalePrice is " << salePrie << std::endl;

  // 2. 列表初始化(更多内容参考3.2.1节和3.3.1节)
  // 以下4条语句都能 定义一个名为units_sold的变量并初始化为0（使用{}是从C++11开始全面应用）
  int units_sold1 = 0;
  int units_sold2 = {0};
  int units_sold3{0}; // 注意：mac下使用默认编译参数编译报错，需要加上 `-std=c++11` 参数才能支持C++11
  int units_sold4(0);
  // 但是要注意：如果使用列表初始化且初始值存在丢失信息的风险，编译器将报错：
  long double ld = 3.14159265358979;
//  int a1{ld}, b1 = {ld}; // 转换未执行，因为存在丢失信息的风险 编译报错
  int a2(ld), b2 = (ld); // 转换执行，且缺失丢失了部分信息
  std::cout << a2 << "、" << b2 << std::endl;

  // 3. 默认初始化
  // 定义域任何函数体之外的变量，被初始化为0；定义域函数体之内的变量将不被初始化，试图访问或者拷贝此变量将引发错误。

}

double applyDiscount(double price, double discount) {
  return price - discount;
}





