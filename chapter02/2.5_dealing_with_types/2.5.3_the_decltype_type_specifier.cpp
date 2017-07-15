#include <iostream>

double getAvg();

/**
 * 2.5.3 decltype 类型指示符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/15
 */

int main() {
  /**
   * 当使用初始化的值推断所属类型的时候，使用auto。但是，如果希望只使用表达式的类型推断出要定义的变量的类型，
   * 但是不用该表达式的值初始化变量。C++11引入了第二种类型说明符decltype，它的作用是选择并返回操作数的数据类型。
   */
  decltype(getAvg()) sum = 95.0; // sum 的类型就是函数 getAvg 的返回类型（TODO 返回类型是double，为什么打印出来是95而没有小数点？）
  std::cout << "sum => " << sum << std::endl;

  /**
   * decltype处理顶层const和引用的方式与auto有些不同。如果decltype使用的表达式是一个变量，则
   * decltype返回该变量的类型（包括顶层const和引用在内。）
   */
  const int ci = 0, &cj = ci;
  decltype(ci) x = 0; // x的类型是const int
  decltype(cj) y = x; // y的类型是const int&，y绑定到变量x
  // decltype(cj) z;  // 错误：cj是一个引用，必须初始化

  /**
   * 如果 decltype 使用的表达式不是一个变量，则decltype返回表达式结果对应的类型。
   */
  int i = 42, *p = &i, &r = i;
  decltype(r + 0) b;    // 加法的结果是int，因此b是一个（未初始化的）int
  // decltype(*p) c; // c是int&，必须初始化

  /**
   * 注意：decltype((i))，含有双层括号的结果永远是引用，而decltype(i)只有当i本身是一个引用的时候才是引用
   */
  // decltype((i)) d; //
  decltype(i) e;      //

  return 0;

}

double getAvg() {
  double chinese = 80.5;
  double english = 90.0;
  double avg = (chinese + english) / 2;
  return avg;
}
