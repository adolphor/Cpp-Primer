#include "Sales_item.h"

/**
 * 2.5.1 类型别名
 *
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/13
 */
int main() {
  /**
   * 类型别名是一个名字，是某个类型的同义词。有两种方式定义类型别名：typedef & using。
   * 类型别名和类型等价，只要出现类型的地方就可以用类型别名进行替换。
   */
  // 方式1：typedef
  typedef double wages;   // wages是double的同义词
  typedef wages base, *p; // base是double的同义词，p是 double* 的同义词
  // 方式2：using
  using SI = Sales_item;  // SI 是 Sales_item 的同义词
  // 类型别名替换
  wages hourly, weekly;

  /**
   * 指针、常量和类型别名：
   * 下面两条声明语句的基本类型都是const pstring，和过去一样，const是对给定类型的修饰。
   * pstring是指向char的指针，那么const pstring就是指向char的常量指针，而不是指向常量字符的指针。
   * TODO 进行一下 底层const 和 顶层const 的分析
   */
  typedef char *pstring;  // pstring 是指向char的指针
  const pstring cstr = 0; // cstr则也是指向char的指针，又因为有const，所以是一个cstr是指向char的常量指针
  const pstring *ps;      // ps 是一个指针，又因为 pstring是一个指针，所以 ps 是一个指向指针的指针，它的对象是指向char的常量指针

  /**
   * 另外需要注意点是，不要尝试将 类型别名 替换成他本来的样子，这样会造成理解错误。
   * 下面这个例子，用 char* 重写之后，数据类型就变成了char，* 变成了声明符的一部分。
   * 这样改写的结果是，const char 成了基本数据类型，两种含义完全不同。
   * 前者是 指向char的常量指针，后者是 指向const char的指针
   */
  const char *cstr2 = 0;  // 是对 const pstring char 的错误理解


  return 0;
}
