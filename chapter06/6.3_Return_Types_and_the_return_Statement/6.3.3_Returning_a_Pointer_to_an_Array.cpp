/**
 * 6.3.3 返回数组指针
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/12
 */
int main() {
  /**
   * 函数返回值不能直接返回数组，但可以返回指向数组的指针
   */
  typedef int arrT[10]; // arrT是一个类型别名，它表示的类型是含有10个整数的数组
  using arrtT = int[10]; // arrT的等价声明，参见 2.5.1
  arrT *func(int i); // func返回一个指向含有10个整数的数组的指针

  /**
   * 声明一个返回数组指针的函数：想要在声明函数时不使用类型别名，必须牢记定义的数组的维度
   * 格式：Type (*function(parameter_list))[dimension]
   */

  // 回顾
  int arr[10]; // arr是一个含有10个整数的数组
  int *p1[10]; // p1是一个含所有10个指针的数组
  int (*p2)[10] = &arr; // p2 是一个指针，它指向含有10个整数的数组

  // 定义范例
  // 分步骤解析：
  // func(int)：调用函数时需要一个int型实参
  // (*func(int))：可以对函数的返回结果执行解引用操作
  // (*func(int))[10]：解引用func的调用将得到一个大小是10的数组
  // int (*func(int))[10]：数组中的元素是int类型
  int (*func(int i))[10];

  /**
   * 使用尾置返回类型：在本应该出现返回类型的地方放置一个auto，然后使用 -> 跟上返回类型
   * 如下所示：函数返回一个指针，并且此指针指向了含有10个整数的数组。
   */
  auto func(int i) -> int (*)[10];

  /**
   * 使用decltype：如果知道函数返回的指针将指向哪个数组，就可以使用decltype关键字声明返回类型
   * 范例：odd是含有5个整数的数组，也就是函数的返回值类型，但decltype不负责把数组转换为指针，
   * 所以decltype的结果是个数组，想要表示arrPtr返回指针需要在函数声明时加上 * 。
   */
  int odd[] = {1, 3, 5, 7, 9};
  int even[] = {0, 2, 4, 6, 8};
  decltype(odd) *arrPtr(int i) {
    return (i % 2) ? &odd : &even;
  }

  return 0;
}
