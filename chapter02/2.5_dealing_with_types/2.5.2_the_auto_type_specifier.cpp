/**
 * 2.5.2 auto 类型说明符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/14
 */
int main() {
  /**
   * C++11 新标准引入了 auto 类型说明符，用它就能让编译器替我们去分析表达式所属的类型，
   * 也就是让编译器通过初始值来推算变量的类型。显然，auto 定义的变量必须有初始值。
   */
  auto item = 1 + 2; // item 初始化未 1与2 的和，因为 1和2 都是int型，所以item也是int类型
  auto i = 0, *p = &i; // i 是整数，p是整形指针

  // 复合类型、常量 和 auto
  /**
   * 首先，使用引用其实是使用引用的对象，特别是引用被当做初始值时，真正参与初始化的其实是引用对象的值。
   * 此时编译器以引用对象的类型作为auto的类型：
   */
  int k=0, &r = k;
  auto a = r; // a 是一个整数（r是j的别名，而j是一个整数）

  /**
   * 其次，auto 会忽略顶层const，保留底层const。比如初始值是一个指向常量的指针：
   */
  const int ci = i, &cr = ci;
  auto b = ci;  // b 是一个整数（ci的顶层const特性被忽略了）
  auto c = cr;  // c 是一个整数（cr是ci的别名，ci本身是一个顶层const）
  auto d = &i;  // d 是一个整形指针（整数的地址就是指向整数的指针）
  auto e = &ci; // e 是一个指向整数常量的指针（对常量对象取地址是一种底层const）

  /**
   * 如果希望推断出的类型是一个顶层const，则需要明确指出：
   */
  const auto f = ci; // ci的推演类型是int，f是 const int

  /**
   * 还可以将引用的类型设为auto，此时原来的初始化规则仍然使用
   */
  auto &g = ci;        // g 是一个整形常量引用，绑定到ci
  // auto &h = 42;     // 错误：不能为非常量引用绑定字面值
  const auto &j = 42;  // 可以为常量引用绑定字面值

  return 0;
}
