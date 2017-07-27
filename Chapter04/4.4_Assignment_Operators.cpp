int get_value();

/**
 * 4.4 赋值运算符
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2017/7/27
 */
int main() {
  int i = 0, j = 0, k = 0; // 初始化而非赋值
  const int ci = i; // 初始化而非赋值
  k = 0; // 类型是int，值是0
  k = 3.14159; // 类型是int，值是3

  // 赋值运算满足右结合律
  int ival, jval;
  ival = jval = 0; // 都被赋值为0

  // 赋值运算优先级较低
  int l = get_value(); // get the first value
  while (l != 42) {
    // do something ...
    l = get_value();
  }
  // 等价于如下的代码
  int m;
  while ((m = get_value()) != 42) { // 不断循环执行方法，直至获取到的值为42
    // do something ...
  }

  return 0;
}

int get_value() {
  return 0;
}
