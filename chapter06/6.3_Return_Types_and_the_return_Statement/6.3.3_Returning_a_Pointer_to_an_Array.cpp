/**
 * 6.3.3 返回数组指针
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/12
 */
int main(){
  /**
   * 函数返回值不能直接返回数组，但可以返回指向数组的指针
   */
  typedef int arrT[10]; // arrT是一个类型别名，它表示的类型是含有10个整数的数组
  using arrtT = int[10]; // arrT的等价声明，参见 2.5.1
  arrT* func(int i); // func返回一个指向含有10个整数的数组的指针

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
   * 使用尾置返回类型
   */

  return 0;
}
