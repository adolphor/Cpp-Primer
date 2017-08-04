/**
 * 6.2.1 传值参数
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/8/4
 */

#include <iostream>

int fact(int val);

void reset(int *ip);

using std::cout;
using std::endl;


int main() {
  /**
   * 基本数据类型：初始值被拷贝给变量，对变量的改动不会影响初始值。
   */
  int n = 0;
  int i = n;
  i = 42;
  cout << "i = " << i << ", n = " << n << endl; // i变为42，但是n仍为0

  int j = fact(i);
  cout << "5! is " << j << endl;
  cout << "i still is " << i << endl;

  /**
   * 指针形参：指针的行为和其他非引用类型一样，当执行指针拷贝操作时，拷贝的是指针的值。拷贝之后，两个指针是不同的指针。
   */
  int n2 = 0, i2 = 0;
  int *p2 = &n2, *q2 = &i2; // P2指向n2，q2指向i2
  *p2 = 42; // n2 的值改变，p2 不变
  p2 = q2;  // p2 指向了 i2，但是 n2 和 i2 的值都不变
  cout << "*p2 = " << *p2 << endl;

  reset(p2);
  cout << "*p2 = " << *p2 << endl;

  return 0;
}

int fact(int val) {
  int temp = 1;
  while (val > 1) {
    temp *= val--;
  }
  return temp;
}

void reset(int *ip){
  *ip = 0; // 改变了指针 ip 所指向对象的值
  ip = 0;  // 只改变了 ip 的局部拷贝，实参未被改变
  cout << "ip = " << *ip << endl;
}

