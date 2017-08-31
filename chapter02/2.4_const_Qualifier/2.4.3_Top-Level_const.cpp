/**
 * 2.4.3 顶层const
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/12
 */
int main() {
  /**
   * 指针本身是一个对象，它又可以指向另外一个对象。因此，指针本身是不是常量以及指针所指的是不是一个常量就是两个相互独立的问题。
   *
   * 顶层const：表示指针本身是一个常量。更一般的，顶层const可以表示任意的对象是常量，对任何数据类型都适用，如算数类型、类、指针等。
   * 底层const：表示指针所指的对象是一个常量。底层const则与指针和引用等符合类型的基本类型部分有关。
   *
   * 指针类型既可以是顶层const，也可以是底层const。
   */
  int i = 0;
  int *const p1 = &i; // 不能改变p1的值，这是一个顶层const
  const int ci = 42; // 不能改变ci的值，这是一个顶层const
  const int *p2 = &ci; // 允许改变p2的值，这是一个底层const
  const int *const p3 = p2; // 靠右的const是顶层const，靠左的const是底层const
  const int &r = ci; // 用于声明引用的const都是底层const（因为引用就是别名，当做一般的变量一样来理解就行了）

  /**
   * 当执行拷贝操作时，常量是顶层const还是底层const会有较大的不同。顶层const基本上不受影响。
   */
  i = ci; // 正确：拷贝ci的值，ci是一个顶层const，对此操作无影响
  p2 = p3; // 正确：p2和p3指向的对象的类型相同，p3顶层const的部分不影响

  /**
   * 顶层const：当执行对象的拷贝操作时，拷入和烤出的对象必须具有相同的顶层const资格，或者两个对象的数据类型必须能够转换。
   * 一般来说，非常量可以转换为常量，反之则不行。
   */
  // int *p = p3; // 错误：p3包含底层const的定义，而p没有，p只能指向一个普通的（非常量）整数。（TODO：这个限制的作用是什么？）
  p2 = p3; // 正确：p2 和 p3 都是底层const
  p2 = &i; // 正确：int* 能转换成 const int*
  //  int &r = ci; // 错误：普通的int& 不能绑定到int常量上
  const int &r2 = i; // 正确：const int& 可以绑定到一个普通 int 上

  return 0;
}
