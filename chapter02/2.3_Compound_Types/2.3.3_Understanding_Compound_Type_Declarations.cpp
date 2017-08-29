/**
 * 2.3.3 理解复合类型的声明
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/5
 */

#include <iostream>

int main() {

  /**
   * 定义多个变量
   */
  int *p1, p2; // p1是指向int的指针，p2是int；* 只是修饰了p1而已
  int *p3, *p4; // p3和p4都是指向int的指针

  /**
   * 指向指针的指针
   */
  int ival = 1024;
  int *p5 = &ival; // p5指向一个int型的数
  int **p6 = &p5; // p6指向一个int型的指针

  std::cout << ival // 直接输出
            << " = " << *p5 // 通过int型指针输出
            << " = " << **p6 // 通过两次解引用获取
            << std::endl;

  /**
   * 指向指针的引用
   */
  int i = 42;
  int *p7; // p7 是一个int型指针
  int *&r = p7; // r是一个队指针p的引用

  r=&i; // r引用了一个指针，因此给r赋值&i就是令p7指向i
  *r = 0; // 解引用r得到i，也就是p7指向的对象，将i的值改为0


  return 0;
}