#include <iostream>

/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/7
 */
int main(){
  /**
   * 与引用一样，也可以领指针指向常量或者非常量，想要存放常量的地址，只能使用指向常量的指针。
   * 但是，需要注意的是，和常量引用一样，指向常量的指针也没有规定其所指向的对象必须是一个常量。
   * 所谓指向常量的指针仅仅要求不能通过该指针改变对象的值，而没有规定那个对象的值不能通过其他途径改变。
   */
  const double pi = 3.14; // pi是一个常量，值不能改变
  //  double * ptr = &pi; // 错误，prt是一个普通指针
  const double *cptr = &pi; // cptr可以指向一个双精度常量
  //  *cptr = 42; // 错误，不能给*ptr赋值
  std::cout << cptr << " => " << *cptr << " => " << pi <<std::endl;


  int age = 18; // int型变量
  const int *cage = &age; // 常量指针，指向非常量int型数据
  std::cout << cage << " => " << *cage << " => " << age <<std::endl;

  return 0;
}
