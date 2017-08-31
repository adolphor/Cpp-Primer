/**
 * 2.4.4 constexpr 和 常量表达式
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/12
 */
int main() {
  /**
   * 常量表达式：是指值不会改变并且在编译过程中就能得到计算结果的表达式。
   * 显然，字面值属于常量表达式。
   * 一个对象是不是常量表达式由它的数据类型和初始值共同决定。
   */
  const int max_files = 20; // 是常量表达式
  const int limit = max_files; // 是常量表达式
  int staff_size = 27; // 不是常量表达式：虽然初始值是个字面值常量，但他的数据类型只是普通int而不是const int，所以不属于常量表达式。
  // const int sz = get_size(); // sz不是常量表达式：尽管sz本身是一个常量，但是它的具体指要到运行时才能获取到，所以不属于常量表达式。

  /**
   * C++ 11 标准中，允许将常量声明为constexpr类型以便编辑器来验证变量的值是否是一个常量表达式。
   * 声明为constexpr的变量一定是一个常量，而且必须用常量表达式初始化。
   */
  constexpr int mf = 20; // 20 是常量表达式
  constexpr int limit2 = mf + 1; // mf+1 是常量表达式
  // constexpr int sz2 = size(); // 只有当size是一个constexpr函数时才是一条正确的声明语句

  /**
   * 字面值类型：常量表达式的值需要在编译时就得到计算，因此对声明constexpr时用到的类型必须有所限制。
   * 因为这些类型一般比较简单，值也显而易见、容易得到，就把它们成为"字面值类型"（literal type）。
   * 目前接触过的数据类型中，算数类型、引用、指针都属于字面值类型。
   * 自定义Sales_item、IO库、string 类型则不属于字面值类型，也就不能被定义为constexpr。
   */

  /**
   * 指针和constexpr：在constexpr声明中如果定义了一个指针，限定符constexpr仅对指针有效，与指针所指的对象无关。
   * 如下所示：constexpr把它所定义的对象置为了顶层const。
   */
  const int *p = nullptr;       // p是一个指向整数常量的指针，可以修改p指向的对象，但不能修改对象的值
  constexpr int *q = nullptr;   // q是一个指向整数的常量指针，不能修改p指向的对象，但能修改对象的值

  /**
   * 与其他常量指针类似，constexpr既可以指向常量也可以指向非常量。
   *
   * 总的来说，使用const的地方就可以用constexpr，但要注意最后一个范例的区别
   */

  return 0;
}
