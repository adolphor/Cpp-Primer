#include <iostream>

/**
 * 2.3.1 引用
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 */

int main() {
  /**
   * 引用为对象起了另外一个名字。
   * 一般在初始化变量时，初始值会被拷贝到新建的对象中，
   * 然后在定义引用时，是将引用和它的初始值绑定在一起，布尔市将初始值拷贝给引用。
   * 一旦初始化完成，引用将和它的初始值对象一直绑定在一起，无法令引用重新绑定到另外一个对象。
   * 因此，引用个必须初始化。
   */
  int ival = 1024;
  int &refVal = ival; // refVal指向ival，（是ival的另外一个名字）
//  int &refVal2;   // 报错，引用必须初始化
  std::cout << "ival=" << ival << ", refVal=" << refVal << std::endl;

  refVal = 2048; // 更改引用refVal的值，也就是更改ival的值，因为他俩绑定的是同一个对象
  std::cout << "ival=" << ival << ", refVal=" << refVal << std::endl;

  // 因为引用本身不是对象，所以不能定义引用的引用
  /**
   * 所有引用的类型都要和与之绑定的对象严格匹配，引用只能绑定在对象上，
   * 不能与字面值或某个表达式的计算结果绑定在一起，原因在2.4.1讲述。
   */

  return 0;

}