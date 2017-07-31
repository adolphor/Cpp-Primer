/**
 * 4.11.3 显示转换
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/31
 */
int main() {
  /**
   * static_const：任何具有明确定义的类型转换，只要不包含底层const
   */
  int i = 6, j = 9;
  double slope = static_cast<double> (j) / i;

  int d = 5;
  void *p = &d; // 任何非常量对象的地址都能存入 void*
  double *dp = static_cast<double *> (p); // 将void* 转换为初试的指针类型

  /**
   * const_cast：只能改变运算对象的底层const
   */
  const char *pc2;
  char *p2 = const_cast<char *>(pc2); // 能执行，但不能通过p写值

  /**
   * reinterpret_cast：为运算对象的位模式提供较低层次上的重新解释（使用这个是非常危险的，细节留待以后学习吧~）
   */
  int *ip3;
  char *pc3 = reinterpret_cast<char *>(ip3);

  return 0;
}
